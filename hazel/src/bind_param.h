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
	return Type();
}

template <>
int getParam(duk_context * ctx, int place)
{
	return duk_get_int( ctx, place );
}

#endif //HAZEL_BIND_PARAM_H
