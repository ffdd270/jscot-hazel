#include "jscot_hazel.h"
#include "bind_imgui_duktape.h"
#include <string>
#include <fstream>
#include <stdexcept>
#include <iostream>

JscotHazel::JscotHazel() : mPtrDukContext( nullptr )
{

}

const char * Base =  "var JscotHazel = /** @class */ (function () {\n"
					 "    function JscotHazel() {\n"
					 "    }\n"
					 "    JscotHazel.AddWindow = function (callback) {\n"
					 "        this.WindowObjects.push(callback);\n"
					 "    };\n"
					 "    JscotHazel.Clock = function () {\n"
					 "        for (var _i = 0, _a = this.WindowObjects; _i < _a.length; _i++) {\n"
					 "            var obj = _a[_i];\n"
					 "            var func = obj.onRender.bind(obj);\n"
					 "            func();\n"
					 "        }\n"
					 "    };\n"
					 "    JscotHazel.WindowObjects = [];\n"
					 "    return JscotHazel;\n"
					 "}());\n"
					 "var DemoWindow = /** @class */ (function () {\n"
					 "    function DemoWindow() {\n"
					 "        this.table = { open: true };\n"
					 "    }\n"
					 "    DemoWindow.prototype.onRender = function () {\n"
					 "        Begin(\"Test Window\", this.table, 1);\n"
					 "        print(this.table.open.toString());\n"
					 "        End();\n"
					 "    };\n"
					 "    return DemoWindow;\n"
					 "}());\n"
					 "var demo_window = new DemoWindow;\n"
					 "print(\"Check!\");\n"
					 "JscotHazel.AddWindow(demo_window);\n"
					 "//# sourceMappingURL=main.js.map";

// -> 바인드
void JscotHazel::Init()
{
	if( mPtrDukContext != nullptr )
	{
		duk_destroy_heap(mPtrDukContext);
		mPtrDukContext = nullptr;
	}

	mPtrDukContext = duk_create_heap_default();
	bind_imgui_duktape(mPtrDukContext);

	if(!LoadFile("dest/main.js"))
	{
		throw std::logic_error("MAIN.JS LOAD FAILED");
	}
}

bool JscotHazel::LoadFile(std::string_view file_path)
{
	std::ifstream file_stream;
	file_stream.open(file_path.data());

	if (!file_stream.is_open())
	{
		return false;
	}

	std::string result_str;
	std::string read_str;

	while (std::getline( file_stream,  read_str))
	{
		result_str += read_str;
	}

	duk_eval_string(mPtrDukContext, result_str.c_str());
}


void JscotHazel::LoadString(std::string_view load_string)
{
}

void JscotHazel::Loop()
{
	duk_push_global_object( mPtrDukContext ); // [Global]
	duk_get_prop_string( mPtrDukContext,  -1, "JscotHazel" ); // [ Global] [ JscotHazel ]

	if ( !duk_is_object( mPtrDukContext, -1 ) )
	{
		throw std::logic_error("BUG! NOT OBJ!");
	}

	duk_get_prop_string( mPtrDukContext, -1, "Clock" ); // [Global] [ JscotHazel ] [ JscotHaezl.Clock ]
	duk_dup( mPtrDukContext, -2 ); // [Global] [JscotHazel] [JscotHazel.Clock] [JscotHazel]
	duk_call_method( mPtrDukContext, 0 ); // [Global] [JscotHazel] [retval]
	duk_pop_n( mPtrDukContext, 3 );
}

