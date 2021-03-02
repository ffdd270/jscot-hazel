//
// Created by nhy20 on 2021-02-24.
//

#ifndef HAZEL_BIND_PARAM_H
#define HAZEL_BIND_PARAM_H

#include <duktape.h>

// 여기선 Primitive 위주로.

template <typename Type>
Type getParam(duk_context * ctx, int place)
{
	static_assert(false); // 타입 없으면 폭발 예정..
	return Type();
}

template <>
const char * getParam(duk_context * ctx, int place)
{
	return duk_get_string(ctx, place);
}

template <>
int getParam(duk_context * ctx, int place)
{
	return duk_get_int( ctx, place );
}

#endif //HAZEL_BIND_PARAM_H
