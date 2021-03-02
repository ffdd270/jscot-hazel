//
// Created by nhy20 on 2021-03-02.
//

#ifndef JSCOT_HAZEL_PARENT_JSCOT_HAZEL_H
#define JSCOT_HAZEL_PARENT_JSCOT_HAZEL_H

#include <duktape.h>

class JscotHazel
{
public:
	JscotHazel();

	void Init();
	void Loop();
private:
	duk_context * mPtrDukContext;
};


#endif //JSCOT_HAZEL_PARENT_JSCOT_HAZEL_H
