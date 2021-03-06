//
// Created by nhy20 on 2021-02-24.
//

#ifndef HAZEL_BIND_RETURN_H
#define HAZEL_BIND_RETURN_H


#include <duktape.h>

template <typename Type>
void pushReturn(duk_context * ctx, Type value)
{
	static_assert(false); // 타입 없으면 폭발 예정..
}

template <>
inline void pushReturn(duk_context * ctx, bool value)
{
	duk_push_boolean(ctx, value);
}


#endif //HAZEL_BIND_RETURN_H
