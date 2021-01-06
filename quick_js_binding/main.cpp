#include <iostream>
#define JS_STRICT_NAN_BOXING
extern "C" {
#include <quickjs-libc.h>
#include <quickjs-version.h>
}
static JSValue all_number_check( JSContext *ctx, int argc, JSValueConst *argv )
{
	for( int  i = 0; i < argc; i++ )
	{
		if ( !JS_IsNumber( argv[i] ) )
		{
			JS_ThrowTypeError( ctx, "Must be Number." );
			return JS_EXCEPTION;
		}
	}

	return JS_UNDEFINED;
}


static JSValue bind_add_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv)
{
	if( JS_IsException( all_number_check( ctx, argc, argv ) ) )
	{
		return JS_EXCEPTION;
	}

	double result = 0;

	for ( int i = 0; i < argc; i++ )
	{
		double number;
		JS_ToFloat64( ctx, &number, argv[i] );

		result += number;
	}

	JSValue return_value = JS_NewFloat64( ctx, result );
	return return_value;
}

static JSValue bind_add_magic(JSContext * ctx, JSValueConst this_val, int argc, JSValueConst *argv, int magic)
{
	if( JS_IsException( all_number_check( ctx, argc, argv ) ) )
	{
		return JS_EXCEPTION;
	}

	double result = 0;

	for ( int i = 0; i < argc; i++ )
	{
		double number;
		JS_ToFloat64( ctx, &number, argv[i] );

		result += number;
	}

	result += magic;

	JSValue return_value = JS_NewFloat64( ctx, result );
	return return_value;
}

/* also used to initialize the worker context */
static JSContext *JS_NewCustomContext(JSRuntime *rt)
{
	JSContext *ctx;
	ctx = JS_NewContext(rt);
	if (!ctx)
		return NULL;
#ifdef CONFIG_BIGNUM
	if (bignum_ext) {
        JS_AddIntrinsicBigFloat(ctx);
        JS_AddIntrinsicBigDecimal(ctx);
        JS_AddIntrinsicOperators(ctx);
        JS_EnableBignumExt(ctx, TRUE);
    }
#endif
	/* system modules */
	js_init_module_std(ctx, "std");
	js_init_module_os(ctx, "os");
	return ctx;
}

// EVAL!
static int eval_buf(JSContext *ctx, const void *buf, int buf_len,
					const char *filename, int eval_flags)
{
	JSValue val;
	int ret;

	if ((eval_flags & JS_EVAL_TYPE_MASK) == JS_EVAL_TYPE_MODULE)
	{
		/* for the modules, we compile then run to be able to set
		   import.meta */
		val = JS_Eval(ctx, (const char *)buf, buf_len, filename,
					  eval_flags | JS_EVAL_FLAG_COMPILE_ONLY);
		if (!JS_IsException(val))
		{
			js_module_set_import_meta(ctx, val, true, true);
			val = JS_EvalFunction(ctx, val);
		}
	} else
	{
		val = JS_Eval(ctx, (const char*)buf, buf_len, filename, eval_flags);
	}
	if (JS_IsException(val))
	{
		js_std_dump_error(ctx);
		ret = -1;
	} else
	{
		ret = 0;
	}
	JS_FreeValue(ctx, val);
	return ret;
}

int main()
{
	JSRuntime * ptr_runtime = JS_NewRuntime();

	// 뭔지 모르겟서 흑흑
	js_std_set_worker_new_context_func(JS_NewCustomContext);
	js_std_init_handlers(ptr_runtime);

	// 콘텍스트 추가.
	JSContext * ptr_context = JS_NewContext( ptr_runtime );
	// 프린트랑 console.log 같은 거 추가해줌.
	js_std_add_helpers( ptr_context, 0, nullptr );

	// ES6 모듈 로드.
	JS_SetModuleLoaderFunc(ptr_runtime, nullptr, js_module_loader, nullptr);

	// 글로벌에 바인딩.
	// 숫자 5는 Function Param Length.
	JSValue global = JS_GetGlobalObject( ptr_context );

	JS_SetPropertyStr( ptr_context, global, "add_normal",
					JS_NewCFunction( ptr_context, bind_add_normal, "add_normal", 5 ) );

	// 오브젝트에 바인딩.
	JSValue magic_test = JS_NewObject(ptr_context);

	JS_SetPropertyStr( ptr_context, magic_test, "add_magic", JS_NewCFunctionMagic( ptr_context, bind_add_magic,
																				"add_magic", 5, JSCFunctionEnum::JS_CFUNC_generic_magic, 10 ) );
	// 이걸로 Magic Test는 Global에 종속되어 Free를 안 해줘도 됨. (아마?
	JS_SetPropertyStr( ptr_context, global, "magic_test", magic_test );
	// 글로벌 해제.
	JS_FreeValue(ptr_context, global);

	const char * script_test = "print( add_normal(32, 64, 128) )";
	eval_buf( ptr_context, script_test, strlen(script_test), "<script>", 0 );

	const char * script_test2 = "print( magic_test.add_magic(32, 64, 128) )";
	eval_buf( ptr_context, script_test2, strlen(script_test2), "<script>", 0 );

	// 해제
	JS_FreeContext(ptr_context);
	JS_FreeRuntime(ptr_runtime);

	return 0;
}
