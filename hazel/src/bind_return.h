//
// Created by nhy20 on 2021-02-24.
//

#ifndef HAZEL_BIND_RETURN_H
#define HAZEL_BIND_RETURN_H


#include <duktape.h>

template <typename Type>
void pushReturn(duk_context * ctx, int place)
{
	return Type();
}


#endif //HAZEL_BIND_RETURN_H
