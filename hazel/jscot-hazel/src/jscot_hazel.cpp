#include "jscot_hazel.h"
#include "bind_imgui_duktape.h"

JscotHazel::JscotHazel()
{

}
// -> 바인드
void JscotHazel::Init()
{
	mPtrDukContext = duk_create_heap_default();
	bind_imgui_duktape(mPtrDukContext);
}

void JscotHazel::Loop()
{
	duk_eval_string(mPtrDukContext, "Begin(\"Hello\"); End();");
}
