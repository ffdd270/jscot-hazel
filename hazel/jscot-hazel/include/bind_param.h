//
// Created by nhy20 on 2021-02-24.
//

#ifndef HAZEL_BIND_PARAM_H
#define HAZEL_BIND_PARAM_H

#include <duktape.h>
#include <imgui.h>
#include <exception>
#include <stdexcept>
// 여기선 Primitive 위주로.

template <typename Type>
Type getParam(duk_context * ctx, int place)
{
	static_assert(false); // 타입 없으면 폭발 예정..
	return Type();
}

template <>
inline const char * getParam(duk_context * ctx, int place)
{
	return duk_get_string(ctx, place);
}

template <>
inline int getParam(duk_context * ctx, int place)
{
	return duk_get_int( ctx, place );
}

template <>
inline unsigned int getParam(duk_context * ctx, int place)
 {
	return duk_get_uint( ctx, place );
}

template <>
inline float getParam(duk_context * ctx, int place)
{
	return duk_get_number( ctx, place );
}

template <>
inline ImVec2 getParam(duk_context * ctx, int place)
{
	// Place에 있는게 Vec2
	ImVec2 vec2;
	bool ok = duk_get_prop_string( ctx, place, "x" );
	if( !duk_is_number( ctx, -1 ) )
	{
		throw std::logic_error("Not Number");
	}
	vec2.x = duk_get_number( ctx, -1 );

	duk_pop(ctx);


	duk_get_prop_string( ctx, place, "y" );
	if( !duk_is_number( ctx, -1 ) )
	{
		throw std::logic_error("Not Number");
	}

	vec2.y = duk_get_number( ctx, -1 );
	duk_pop(ctx);

	return vec2;
}


#endif //HAZEL_BIND_PARAM_H
