#include <iostream>
#include <duktape.h>
#include "bind_js.h"

void adder( int a, int b )
{
	std::cout << "A : " << a << " B : " << b << std::endl;
}


int main()
{
	duk_context *ctx = duk_create_heap_default();

	bindFunc(ctx, "adder", adder);
	duk_eval_string( ctx, "adder(3,4)");
	duk_destroy_heap(ctx);


	return 0;
}
