//
// Created by nhy20 on 2021-03-02.
//

#ifndef JSCOT_HAZEL_PARENT_JSCOT_HAZEL_H
#define JSCOT_HAZEL_PARENT_JSCOT_HAZEL_H

#include <duktape.h>
#include <string_view>

class JscotHazel
{
public:
	JscotHazel();

	void Init();
	bool LoadFile( std::string_view file_path );
	void LoadString( std::string_view load_string );
	void Loop();
private:
	duk_context * mPtrDukContext;
};


#endif //JSCOT_HAZEL_PARENT_JSCOT_HAZEL_H
