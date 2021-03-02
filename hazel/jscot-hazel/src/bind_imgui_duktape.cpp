#include "bind_imgui_duktape.h"
#include "bind_js.h"
#include "imgui.h"
#include <exception>
#include <stdexcept>

void Begin( const char * str )
{
	ImGui::Begin(str);
}


// 여기서부터 수동 바인딩.
duk_ret_t bind_ImGui_Begin( duk_context *ctx )
{
	// 0 -> Name
	// 1 -> Fixable Boolean
	// 2 -> Windows Flag

	int top_sz = duk_get_top(ctx);
	if ( top_sz == 0 ) { return 0; }

	// 파라미터 Set
	const char * name = nullptr;
	bool open = true;
	ImGuiWindowFlags flags = 0;

	name = duk_to_string(ctx, 0);

	if( top_sz > 1 )
	{
		if ( !duk_is_object( ctx, 1 ))
		{
			throw std::logic_error( "PROP NOT PROP" );
		}

		duk_get_prop_string( ctx, 1, "open" ); // 최상위에 뭔가 하나 올라감.
		//없으면 undefined. 있으면 value

		if ( duk_is_boolean( ctx, -1  ) )
		{
			open = duk_get_boolean( ctx, -1 );
		}

		duk_pop(ctx);
	}

	if ( top_sz > 2 )
	{
		flags = duk_get_int( ctx, 2 );
	}

	// Execute
	ImGui::Begin( name, &open, flags );

	if ( top_sz > 1 )
	{
		duk_push_boolean( ctx, open ); // -1에 쌓이고..
		duk_put_prop_string( ctx, 1, "open" );
	}

	return 0;
}


void bind_imgui_duktape(duk_context *ptr_context)
{
	bindFunc( ptr_context, "Begin", Begin );
	bindFunc( ptr_context, "End", ImGui::End );
}
