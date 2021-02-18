#include <iostream>
#include <duktape.h>

int main()
{
	duk_context *ctx = duk_create_heap_default();
	// TODO :


	duk_destroy_heap(ctx);
	return 0;
}
