#include <iostream>
#include <duktape.h>
#include <functional>

static duk_ret_t native_print(duk_context *ctx) {
	duk_push_string(ctx, " ");
	duk_insert(ctx, 0);
	duk_join(ctx, duk_get_top(ctx) - 1);
	printf("%s\n", duk_safe_to_string(ctx, -1));
	return 0;
}

static duk_ret_t native_adder(duk_context *ctx) {
	int i;
	int n = duk_get_top(ctx);  /* #args */
	double res = 0.0;

	for (i = 0; i < n; i++) {
		res += duk_to_number(ctx, i);
	}

	duk_push_number(ctx, res);
	return 1;  /* one return value */
}

int hello2( int b )
{
	return b;
}

std::unordered_map<uint32_t, void *> magic_tbl;

template <typename Type>
Type getParam(duk_context * ctx, int place)
{
	return Type();
}

template <>
int getParam(duk_context * ctx, int place)
{
	return duk_get_int( ctx, place );
}

template <typename Type>
void getReturn( duk_context * ctx, Type & value )
{

}
template <>
void getReturn( duk_context * ctx, int & value )
{
	duk_push_int( ctx, value );
}


template <typename ReturnType, typename Param1>
duk_ret_t caller(duk_context * ctx, ReturnType(* func)(Param1) )
{
	ReturnType rtn = func( getParam<Param1>(ctx, 0) );
	getReturn( ctx, rtn );
	return 1;
}

template <typename ReturnType, typename Param1, typename Param2>
duk_ret_t caller(duk_context * ctx, ReturnType(* func)(Param1, Param2) )
{
	ReturnType rtn = func( getParam<Param1>(ctx, 0), getParam<Param2>(ctx, 1) );
	getReturn( ctx, rtn );
	return 1;
}

template <typename ReturnType, typename Param1, typename Param2, typename Param3>
duk_ret_t caller(duk_context * ctx, ReturnType(* func)(Param1, Param2) )
{
	ReturnType rtn = func( getParam<Param1>(ctx, 0), getParam<Param2>(ctx, 1), getParam<Param3>(ctx, 2) );
	getReturn( ctx, rtn );
	return 1;
}



template <typename ReturnType, typename ...Params>
duk_ret_t realBindFunc(duk_context * ctx)
{
	duk_push_current_function( ctx );
	duk_get_prop_string( ctx, -1, "_func_ptr" );
	auto func = reinterpret_cast<ReturnType (*)(Params...)>( duk_to_pointer( ctx,  -1  ) );
	caller( ctx, func );
	return 1;
}

template<typename ReturnType, typename ...Params >
void bindFunc(  duk_context * ctx, const char * name, ReturnType (* func_ptr)(Params...))
{
	duk_push_c_function(ctx, (realBindFunc <ReturnType, Params... > ), DUK_VARARGS );
	duk_push_pointer( ctx, reinterpret_cast<void *>( func_ptr ) );
	duk_put_prop_string( ctx, -2, "_func_ptr");
	duk_put_global_string( ctx, name );
}
char test_func( int param )
{
	return 'c';
}


duk_ret_t obj_getter( duk_context *ctx )
{
	if ( duk_is_object( ctx, -1 ) )
	{
		duk_get_prop_string( ctx, -1, "open" );

		if ( duk_is_boolean( ctx, -1 ))
		{
			printf( "OK ! : %d ", duk_get_boolean( ctx, -1 ));
		}

	}
	else
	{
		printf("FAILED");
	}

	return 0;
}


duk_ret_t obj_setter( duk_context *ctx )
{
	if ( duk_is_object( ctx, -1 ) )
	{
		duk_push_boolean( ctx, false ); //  -1. 무조건 false
		duk_put_prop_string( ctx, 0, "open" ); // 0.
	}
	else
	{
		printf("FAILED");
	}

	return 0;
}




int main(int argc, char *argv[]) {
	duk_context *ctx = duk_create_heap_default();

	(void) argc; (void) argv;  /* suppress warning */

	duk_push_c_function(ctx, obj_getter, DUK_VARARGS);
	duk_put_global_string(ctx, "obj_getter");

	duk_push_c_function(ctx, obj_setter, DUK_VARARGS);
	duk_put_global_string(ctx, "obj_setter");

	duk_push_c_function(ctx, native_print, DUK_VARARGS);
	duk_put_global_string(ctx, "print");


	bindFunc( ctx, "hello2", hello2 );
	bindFunc( ctx, "hello", test_func );

	duk_eval_string(ctx, "obj_getter({ open: true })");
	duk_eval_string(ctx, "var obj = { open: true };\n"
					  	"obj_setter(obj);\n"
	   					"print(obj.open);\n");
	duk_pop(ctx);  /* pop eval result */

	duk_destroy_heap(ctx);

	return 0;
}
