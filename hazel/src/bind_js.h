//
// Created by nhy20 on 2021-02-24.
//

#ifndef HAZEL_BIND_JS_H
#define HAZEL_BIND_JS_H

#include <duktape.h>
#include "bind_param.h"


template <typename ReturnType, typename Param1>
ReturnType caller(duk_context * ctx, ReturnType(* func)(Param1) )
{
	return func( getParam<Param1>(ctx, 0) );
}

template <typename ReturnType, typename Param1, typename Param2>
ReturnType caller(duk_context * ctx, ReturnType(* func)(Param1, Param2) )
{
	return func( getParam<Param1>(ctx, 0), getParam<Param2>(ctx, 1) );
}

template <typename ReturnType, typename Param1, typename Param2, typename Param3>
ReturnType caller(duk_context * ctx, ReturnType(* func)(Param1, Param2, Param3) )
{
	return func( getParam<Param1>(ctx, 0), getParam<Param2>(ctx, 1), getParam<Param3>(ctx, 2) );
}

template <typename ReturnType, typename ...Params>
duk_ret_t realBindFunc(duk_context * ctx)
{
	duk_push_current_function( ctx );
	duk_get_prop_string( ctx, -1, "_func_ptr" );
	auto func = reinterpret_cast<ReturnType (*)(Params...)>( duk_to_pointer( ctx,  -1  ) );
	ReturnType value = caller( ctx, func );
	pushReturn( ctx, value );

	return 1;
}
template <typename ...Params>
duk_ret_t realBindFuncVoid(duk_context * ctx)
{
	duk_push_current_function( ctx );
	duk_get_prop_string( ctx, -1, "_func_ptr" );
	auto func = reinterpret_cast<void (*)(Params...)>( duk_to_pointer( ctx,  -1  ) );
	caller( ctx, func );
	return 0;
}

template<typename ReturnType, typename ...Params >
void bindFunc(  duk_context * ctx, const char * name, ReturnType (* func_ptr)(Params...))
{
	duk_push_c_function(ctx, (realBindFunc <ReturnType, Params... > ), DUK_VARARGS );
	duk_push_pointer( ctx, reinterpret_cast<void *>( func_ptr ) );
	duk_put_prop_string( ctx, -2, "_func_ptr");
	duk_put_global_string( ctx, name );
}

template<typename ...Params >
void bindFunc(  duk_context * ctx, const char * name, void (* func_ptr)(Params...))
{
	duk_push_c_function(ctx, (realBindFuncVoid<Params...>), DUK_VARARGS );
	duk_push_pointer( ctx, reinterpret_cast<void *>( func_ptr ) );
	duk_put_prop_string( ctx, -2, "_func_ptr");
	duk_put_global_string( ctx, name );
}


#endif //HAZEL_BIND_JS_H
