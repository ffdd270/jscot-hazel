#include "bind_imgui_duktape.h"
#include <duktape.h>
#include <imgui.h>
#include "bind_js.h"

ImGuiIO& GENERATE_GetIO()
{
	return ImGui::GetIO();
}
ImGuiStyle& GENERATE_GetStyle()
{
	return ImGui::GetStyle();
}
ImDrawData* GENERATE_GetDrawData()
{
	return ImGui::GetDrawData();
}
void GENERATE_ShowDemoWindow(bool* p_open)
{
	ImGui::ShowDemoWindow(p_open);
}
void GENERATE_ShowAboutWindow(bool* p_open)
{
	ImGui::ShowAboutWindow(p_open);
}
void GENERATE_ShowMetricsWindow(bool* p_open)
{
	ImGui::ShowMetricsWindow(p_open);
}
void GENERATE_ShowStyleEditor(ImGuiStyle* ref)
{
	ImGui::ShowStyleEditor(ref);
}
bool GENERATE_ShowStyleSelector(const char* label)
{
	return ImGui::ShowStyleSelector(label);
}
void GENERATE_ShowFontSelector(const char* label)
{
	ImGui::ShowFontSelector(label);
}
void GENERATE_ShowUserGuide()
{
	ImGui::ShowUserGuide();
}
const char* GENERATE_GetVersion()
{
	return ImGui::GetVersion();
}
void GENERATE_StyleColorsDark(ImGuiStyle* dst)
{
	ImGui::StyleColorsDark(dst);
}
void GENERATE_StyleColorsClassic(ImGuiStyle* dst)
{
	ImGui::StyleColorsClassic(dst);
}
void GENERATE_StyleColorsLight(ImGuiStyle* dst)
{
	ImGui::StyleColorsLight(dst);
}
bool GENERATE_Begin(const char* name, bool* p_open, ImGuiWindowFlags flags)
{
	return ImGui::Begin(name, p_open, flags);
}
void GENERATE_End()
{
	ImGui::End();
}
bool GENERATE_BeginChild(ImGuiID id, const ImVec2& size, bool border, ImGuiWindowFlags flags)
{
	return ImGui::BeginChild(id, size, border, flags);
}
void GENERATE_EndChild()
{
	ImGui::EndChild();
}
bool GENERATE_IsWindowAppearing()
{
	return ImGui::IsWindowAppearing();
}
bool GENERATE_IsWindowCollapsed()
{
	return ImGui::IsWindowCollapsed();
}
bool GENERATE_IsWindowFocused(ImGuiFocusedFlags flags=0)
{
	return ImGui::IsWindowFocused(flags=0);
}
bool GENERATE_IsWindowHovered(ImGuiHoveredFlags flags=0)
{
	return ImGui::IsWindowHovered(flags=0);
}
ImDrawList* GENERATE_GetWindowDrawList()
{
	return ImGui::GetWindowDrawList();
}
ImVec2 GENERATE_GetWindowPos()
{
	return ImGui::GetWindowPos();
}
ImVec2 GENERATE_GetWindowSize()
{
	return ImGui::GetWindowSize();
}
float GENERATE_GetWindowWidth()
{
	return ImGui::GetWindowWidth();
}
float GENERATE_GetWindowHeight()
{
	return ImGui::GetWindowHeight();
}
void GENERATE_SetNextWindowPos(const ImVec2& pos, ImGuiCond cond, const ImVec2& pivot)
{
	ImGui::SetNextWindowPos(pos, cond, pivot);
}
void GENERATE_SetNextWindowSize(const ImVec2& size, ImGuiCond cond)
{
	ImGui::SetNextWindowSize(size, cond);
}
void GENERATE_SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeCallback custom_callback, void* custom_callback_data)
{
	ImGui::SetNextWindowSizeConstraints(size_min, size_max, custom_callback, custom_callback_data);
}
void GENERATE_SetNextWindowContentSize(const ImVec2& size)
{
	ImGui::SetNextWindowContentSize(size);
}
void GENERATE_SetNextWindowCollapsed(bool collapsed, ImGuiCond cond)
{
	ImGui::SetNextWindowCollapsed(collapsed, cond);
}
void GENERATE_SetNextWindowFocus()
{
	ImGui::SetNextWindowFocus();
}
void GENERATE_SetNextWindowBgAlpha(float alpha)
{
	ImGui::SetNextWindowBgAlpha(alpha);
}
void GENERATE_SetWindowPos(const ImVec2& pos, ImGuiCond cond)
{
	ImGui::SetWindowPos(pos, cond);
}
void GENERATE_SetWindowSize(const ImVec2& size, ImGuiCond cond)
{
	ImGui::SetWindowSize(size, cond);
}
void GENERATE_SetWindowCollapsed(bool collapsed, ImGuiCond cond)
{
	ImGui::SetWindowCollapsed(collapsed, cond);
}
void GENERATE_SetWindowCollapsedByName(const char* name, bool collapsed, ImGuiCond cond)
{
	ImGui::SetWindowCollapsed(name, collapsed, cond);
}
void GENERATE_SetWindowFocus()
{
	ImGui::SetWindowFocus();
}
void GENERATE_SetWindowFontScale(float scale)
{
	ImGui::SetWindowFontScale(scale);
}
void GENERATE_SetWindowPosByName(const char* name, const ImVec2& pos, ImGuiCond cond)
{
	ImGui::SetWindowPos(name, pos, cond);
}
void GENERATE_SetWindowSizeByName(const char* name, const ImVec2& size, ImGuiCond cond)
{
	ImGui::SetWindowSize(name, size, cond);
}
void GENERATE_SetWindowFocus(const char* name)
{
	ImGui::SetWindowFocus(name);
}
ImVec2 GENERATE_GetContentRegionMax()
{
	return ImGui::GetContentRegionMax();
}
ImVec2 GENERATE_GetContentRegionAvail()
{
	return ImGui::GetContentRegionAvail();
}
ImVec2 GENERATE_GetWindowContentRegionMin()
{
	return ImGui::GetWindowContentRegionMin();
}
ImVec2 GENERATE_GetWindowContentRegionMax()
{
	return ImGui::GetWindowContentRegionMax();
}
float GENERATE_GetWindowContentRegionWidth()
{
	return ImGui::GetWindowContentRegionWidth();
}
float GENERATE_GetScrollX()
{
	return ImGui::GetScrollX();
}
float GENERATE_GetScrollY()
{
	return ImGui::GetScrollY();
}
float GENERATE_GetScrollMaxX()
{
	return ImGui::GetScrollMaxX();
}
float GENERATE_GetScrollMaxY()
{
	return ImGui::GetScrollMaxY();
}
void GENERATE_SetScrollX(float scroll_x)
{
	ImGui::SetScrollX(scroll_x);
}
void GENERATE_SetScrollY(float scroll_y)
{
	ImGui::SetScrollY(scroll_y);
}
void GENERATE_SetScrollHereX(float center_x_ratio)
{
	ImGui::SetScrollHereX(center_x_ratio);
}
void GENERATE_SetScrollHereY(float center_y_ratio)
{
	ImGui::SetScrollHereY(center_y_ratio);
}
void GENERATE_SetScrollFromPosX(float local_x, float center_x_ratio)
{
	ImGui::SetScrollFromPosX(local_x, center_x_ratio);
}
void GENERATE_SetScrollFromPosY(float local_y, float center_y_ratio)
{
	ImGui::SetScrollFromPosY(local_y, center_y_ratio);
}
void GENERATE_PushFont(ImFont* font)
{
	ImGui::PushFont(font);
}
void GENERATE_PopFont()
{
	ImGui::PopFont();
}
void GENERATE_PushStyleColor(ImGuiCol idx, ImU32 col)
{
	ImGui::PushStyleColor(idx, col);
}
void GENERATE_PopStyleColor(int count)
{
	ImGui::PopStyleColor(count);
}
void GENERATE_PushStyleVar(ImGuiStyleVar idx, float val)
{
	ImGui::PushStyleVar(idx, val);
}
void GENERATE_PopStyleVar(int count)
{
	ImGui::PopStyleVar(count);
}
ImVec4 GENERATE_GetStyleColorVec4(ImGuiCol idx)
{
	return ImGui::GetStyleColorVec4(idx);
}
ImFont* GENERATE_GetFont()
{
	return ImGui::GetFont();
}
float GENERATE_GetFontSize()
{
	return ImGui::GetFontSize();
}
ImVec2 GENERATE_GetFontTexUvWhitePixel()
{
	return ImGui::GetFontTexUvWhitePixel();
}
ImU32 GENERATE_GetColorU32(ImU32 col)
{
	return ImGui::GetColorU32(col);
}
void GENERATE_PushItemWidth(float item_width)
{
	ImGui::PushItemWidth(item_width);
}
void GENERATE_PopItemWidth()
{
	ImGui::PopItemWidth();
}
void GENERATE_SetNextItemWidth(float item_width)
{
	ImGui::SetNextItemWidth(item_width);
}
float GENERATE_CalcItemWidth()
{
	return ImGui::CalcItemWidth();
}
void GENERATE_PushTextWrapPos(float wrap_local_pos_x)
{
	ImGui::PushTextWrapPos(wrap_local_pos_x);
}
void GENERATE_PopTextWrapPos()
{
	ImGui::PopTextWrapPos();
}
void GENERATE_PushAllowKeyboardFocus(bool allow_keyboard_focus)
{
	ImGui::PushAllowKeyboardFocus(allow_keyboard_focus);
}
void GENERATE_PopAllowKeyboardFocus()
{
	ImGui::PopAllowKeyboardFocus();
}
void GENERATE_PushButtonRepeat(bool repeat)
{
	ImGui::PushButtonRepeat(repeat);
}
void GENERATE_PopButtonRepeat()
{
	ImGui::PopButtonRepeat();
}
void GENERATE_Separator()
{
	ImGui::Separator();
}
void GENERATE_SameLine(float offset_from_start_x=0.0f, float spacing=-1.0f)
{
	ImGui::SameLine(offset_from_start_x=0.0f, spacing=-1.0f);
}
void GENERATE_NewLine()
{
	ImGui::NewLine();
}
void GENERATE_Spacing()
{
	ImGui::Spacing();
}
void GENERATE_Dummy(const ImVec2& size)
{
	ImGui::Dummy(size);
}
void GENERATE_Indent(float indent_w)
{
	ImGui::Indent(indent_w);
}
void GENERATE_Unindent(float indent_w)
{
	ImGui::Unindent(indent_w);
}
void GENERATE_BeginGroup()
{
	ImGui::BeginGroup();
}
void GENERATE_EndGroup()
{
	ImGui::EndGroup();
}
ImVec2 GENERATE_GetCursorPos()
{
	return ImGui::GetCursorPos();
}
float GENERATE_GetCursorPosX()
{
	return ImGui::GetCursorPosX();
}
float GENERATE_GetCursorPosY()
{
	return ImGui::GetCursorPosY();
}
void GENERATE_SetCursorPos(const ImVec2& local_pos)
{
	ImGui::SetCursorPos(local_pos);
}
void GENERATE_SetCursorPosX(float local_x)
{
	ImGui::SetCursorPosX(local_x);
}
void GENERATE_SetCursorPosY(float local_y)
{
	ImGui::SetCursorPosY(local_y);
}
ImVec2 GENERATE_GetCursorStartPos()
{
	return ImGui::GetCursorStartPos();
}
ImVec2 GENERATE_GetCursorScreenPos()
{
	return ImGui::GetCursorScreenPos();
}
void GENERATE_SetCursorScreenPos(const ImVec2& pos)
{
	ImGui::SetCursorScreenPos(pos);
}
void GENERATE_AlignTextToFramePadding()
{
	ImGui::AlignTextToFramePadding();
}
float GENERATE_GetTextLineHeight()
{
	return ImGui::GetTextLineHeight();
}
float GENERATE_GetTextLineHeightWithSpacing()
{
	return ImGui::GetTextLineHeightWithSpacing();
}
float GENERATE_GetFrameHeight()
{
	return ImGui::GetFrameHeight();
}
float GENERATE_GetFrameHeightWithSpacing()
{
	return ImGui::GetFrameHeightWithSpacing();
}
void GENERATE_PushID(const char* str_id)
{
	ImGui::PushID(str_id);
}
void GENERATE_PopID()
{
	ImGui::PopID();
}
ImGuiID GENERATE_GetID(const char* str_id)
{
	return ImGui::GetID(str_id);
}
void GENERATE_TextUnformatted(const char* text, const char* text_end)
{
	ImGui::TextUnformatted(text, text_end);
}
void GENERATE_Text(const char* fmt)
{
	ImGui::Text(fmt);
}
void GENERATE_TextV(const char* fmt, va_list args)
{
	ImGui::TextV(fmt, args);
}
void GENERATE_TextColored(const ImVec4& col, const char* fmt)
{
	ImGui::TextColored(col, fmt);
}
void GENERATE_TextColoredV(const ImVec4& col, const char* fmt, va_list args)
{
	ImGui::TextColoredV(col, fmt, args);
}
void GENERATE_TextDisabled(const char* fmt)
{
	ImGui::TextDisabled(fmt);
}
void GENERATE_TextDisabledV(const char* fmt, va_list args)
{
	ImGui::TextDisabledV(fmt, args);
}
void GENERATE_TextWrapped(const char* fmt)
{
	ImGui::TextWrapped(fmt);
}
void GENERATE_LabelText(const char* label, const char* fmt)
{
	ImGui::LabelText(label, fmt);
}
void GENERATE_LabelTextV(const char* label, const char* fmt, va_list args)
{
	ImGui::LabelTextV(label, fmt, args);
}
void GENERATE_BulletText(const char* fmt)
{
	ImGui::BulletText(fmt);
}
void GENERATE_BulletTextV(const char* fmt, va_list args)
{
	ImGui::BulletTextV(fmt, args);
}
bool GENERATE_Button(const char* label, ImVec2 size)
{
	return ImGui::Button(label, size);
}
bool GENERATE_SmallButton(const char* label)
{
	return ImGui::SmallButton(label);
}
bool GENERATE_InvisibleButton(const char* str_id, ImVec2 size, ImGuiButtonFlags flags)
{
	return ImGui::InvisibleButton(str_id, size, flags);
}
bool GENERATE_ArrowButton(const char* str_id, ImGuiDir dir)
{
	return ImGui::ArrowButton(str_id, dir);
}
void GENERATE_Image(ImTextureID user_texture_id, ImVec2 size, ImVec2 uv0, ImVec2 uv1, ImVec4 tint_col, ImVec4 border_col)
{
	ImGui::Image(user_texture_id, size, uv0, uv1, tint_col, border_col);
}
bool GENERATE_ImageButton(ImTextureID user_texture_id, ImVec2 size, ImVec2 uv0, ImVec2 uv1, int frame_padding, ImVec4 bg_col, ImVec4 tint_col)
{
	return ImGui::ImageButton(user_texture_id, size, uv0, uv1, frame_padding, bg_col, tint_col);
}
bool GENERATE_Checkbox(const char* label, bool* v)
{
	return ImGui::Checkbox(label, v);
}
bool GENERATE_CheckboxFlags(const char* label, unsigned int * flags, int flags_value)
{
	return ImGui::CheckboxFlags(label, flags, flags_value);
}
bool GENERATE_RadioButton(const char* label, bool active)
{
	return ImGui::RadioButton(label, active);
}
void GENERATE_ProgressBar(float fraction, const ImVec2& size_arg, const char* overlay)
{
	ImGui::ProgressBar(fraction, size_arg, overlay);
}
void GENERATE_Bullet()
{
	ImGui::Bullet();
}
bool GENERATE_BeginCombo(const char* label, const char* preview_value, ImGuiComboFlags flags)
{
	return ImGui::BeginCombo(label, preview_value, flags);
}
void GENERATE_EndCombo()
{
	ImGui::EndCombo();
}
bool GENERATE_Combo(const char* label, int* current_item, const char * const items[], int items_count, int popup_max_height_in_items)
{
	return ImGui::Combo(label, current_item, items, items_count, popup_max_height_in_items);
}
bool GENERATE_DragFloat(const char* label, float* v, float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragFloat(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragFloat2(const char* label, float v[2], float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragFloat2(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragFloat3(const char* label, float v[3], float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragFloat3(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragFloat4(const char* label, float v[4], float v_speed, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragFloat4(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed, float v_min, float v_max, const char* format, const char* format_max, ImGuiSliderFlags flags)
{
	return ImGui::DragFloatRange2(label, v_current_min, v_current_max, v_speed, v_min, v_max, format, format_max, flags);
}
bool GENERATE_DragInt(const char* label, int* v, float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragInt(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragInt2(const char* label, int v[2], float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragInt2(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragInt3(const char* label, int v[3], float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragInt3(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragInt4(const char* label, int v[4], float v_speed, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragInt4(label, v, v_speed, v_min, v_max, format, flags);
}
bool GENERATE_DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed, int v_min, int v_max, const char* format, const char* format_max, ImGuiSliderFlags flags)
{
	return ImGui::DragIntRange2(label, v_current_min, v_current_max, v_speed, v_min, v_max, format, format_max, flags);
}
bool GENERATE_DragScalar(const char* label, ImGuiDataType data_type, void* p_data, float v_speed, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragScalar(label, data_type, p_data, v_speed, p_min, p_max, format, flags);
}
bool GENERATE_DragScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, float v_speed, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::DragScalarN(label, data_type, p_data, components, v_speed, p_min, p_max, format, flags);
}
bool GENERATE_SliderFloat(const char* label, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderFloat(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderFloat2(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderFloat3(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderFloat4(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderAngle(const char* label, float* v_rad, float v_degrees_min, float v_degrees_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderAngle(label, v_rad, v_degrees_min, v_degrees_max, format, flags);
}
bool GENERATE_SliderInt(const char* label, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderInt(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderInt2(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderInt3(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderInt4(label, v, v_min, v_max, format, flags);
}
bool GENERATE_SliderScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderScalar(label, data_type, p_data, p_min, p_max, format, flags);
}
bool GENERATE_SliderScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::SliderScalarN(label, data_type, p_data, components, p_min, p_max, format, flags);
}
bool GENERATE_VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::VSliderFloat(label, size, v, v_min, v_max, format, flags);
}
bool GENERATE_VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::VSliderInt(label, size, v, v_min, v_max, format, flags);
}
bool GENERATE_VSliderScalar(const char* label, const ImVec2& size, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format, ImGuiSliderFlags flags)
{
	return ImGui::VSliderScalar(label, size, data_type, p_data, p_min, p_max, format, flags);
}
bool GENERATE_InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
	return ImGui::InputText(label, buf, buf_size, flags, callback, user_data);
}
bool GENERATE_InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
	return ImGui::InputTextMultiline(label, buf, buf_size, size, flags, callback, user_data);
}
bool GENERATE_InputTextWithHint(const char* label, const char* hint, char* buf, size_t buf_size, ImGuiInputTextFlags flags, ImGuiInputTextCallback callback, void* user_data)
{
	return ImGui::InputTextWithHint(label, hint, buf, buf_size, flags, callback, user_data);
}
bool GENERATE_InputFloat(const char* label, float* v, float step, float step_fast, const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputFloat(label, v, step, step_fast, format, flags);
}
bool GENERATE_InputFloat2(const char* label, float v[2], const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputFloat2(label, v, format, flags);
}
bool GENERATE_InputFloat3(const char* label, float v[3], const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputFloat3(label, v, format, flags);
}
bool GENERATE_InputFloat4(const char* label, float v[4], const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputFloat4(label, v, format, flags);
}
bool GENERATE_InputInt(const char* label, int* v, int step, int step_fast, ImGuiInputTextFlags flags)
{
	return ImGui::InputInt(label, v, step, step_fast, flags);
}
bool GENERATE_InputInt2(const char* label, int v[2], ImGuiInputTextFlags flags)
{
	return ImGui::InputInt2(label, v, flags);
}
bool GENERATE_InputInt3(const char* label, int v[3], ImGuiInputTextFlags flags)
{
	return ImGui::InputInt3(label, v, flags);
}
bool GENERATE_InputInt4(const char* label, int v[4], ImGuiInputTextFlags flags)
{
	return ImGui::InputInt4(label, v, flags);
}
bool GENERATE_InputDouble(const char* label, double* v, double step, double step_fast, const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputDouble(label, v, step, step_fast, format, flags);
}
bool GENERATE_InputScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_step, const void* p_step_fast, const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputScalar(label, data_type, p_data, p_step, p_step_fast, format, flags);
}
bool GENERATE_InputScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_step, const void* p_step_fast, const char* format, ImGuiInputTextFlags flags)
{
	return ImGui::InputScalarN(label, data_type, p_data, components, p_step, p_step_fast, format, flags);
}
bool GENERATE_ColorEdit3(const char* label, float col[3], ImGuiColorEditFlags flags)
{
	return ImGui::ColorEdit3(label, col, flags);
}
bool GENERATE_ColorEdit4(const char* label, float col[4], ImGuiColorEditFlags flags)
{
	return ImGui::ColorEdit4(label, col, flags);
}
bool GENERATE_ColorPicker3(const char* label, float col[3], ImGuiColorEditFlags flags)
{
	return ImGui::ColorPicker3(label, col, flags);
}
bool GENERATE_ColorPicker4(const char* label, float col[4], ImGuiColorEditFlags flags, const float* ref_col)
{
	return ImGui::ColorPicker4(label, col, flags, ref_col);
}
bool GENERATE_ColorButton(const char* desc_id, const ImVec4& col, ImGuiColorEditFlags flags, ImVec2 size)
{
	return ImGui::ColorButton(desc_id, col, flags, size);
}
void GENERATE_SetColorEditOptions(ImGuiColorEditFlags flags)
{
	ImGui::SetColorEditOptions(flags);
}
bool GENERATE_TreeNode(const char* label)
{
	return ImGui::TreeNode(label);
}
bool GENERATE_TreeNodeWithStrId(const char* str_id, const char* fmt)
{
	return ImGui::TreeNode(str_id, fmt);
}
bool GENERATE_TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags)
{
	return ImGui::TreeNodeEx(label, flags);
}
bool GENERATE_TreeNodeExWithStrId(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt)
{
	return ImGui::TreeNodeEx(str_id, flags, fmt);
}
void GENERATE_TreePush(const char* str_id)
{
	ImGui::TreePush(str_id);
}
void GENERATE_TreePop()
{
	ImGui::TreePop();
}
float GENERATE_GetTreeNodeToLabelSpacing()
{
	return ImGui::GetTreeNodeToLabelSpacing();
}
bool GENERATE_CollapsingHeader(const char* label, bool* p_open, ImGuiTreeNodeFlags flags)
{
	return ImGui::CollapsingHeader(label, p_open, flags);
}
void GENERATE_SetNextItemOpen(bool is_open, ImGuiCond cond)
{
	ImGui::SetNextItemOpen(is_open, cond);
}
bool GENERATE_Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags, const ImVec2& size)
{
	return ImGui::Selectable(label, p_selected, flags, size);
}
bool GENERATE_ListBox(const char* label, int* current_item, const char* const items[], int items_count, int height_in_items)
{
	return ImGui::ListBox(label, current_item, items, items_count, height_in_items);
}
bool GENERATE_ListBoxHeaderBySize(const char* label, const ImVec2& size)
{
	return ImGui::ListBoxHeader(label, size);
}
bool GENERATE_ListBoxHeader(const char* label, int items_count, int height_in_items)
{
	return ImGui::ListBoxHeader(label, items_count, height_in_items);
}
void GENERATE_ListBoxFooter()
{
	ImGui::ListBoxFooter();
}
void GENERATE_PlotLines(const char* label, const float* values, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, ImVec2 graph_size, int stride)
{
	ImGui::PlotLines(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size, stride);
}
void GENERATE_PlotHistogram(const char* label, const float* values, int values_count, int values_offset, const char* overlay_text, float scale_min, float scale_max, ImVec2 graph_size, int stride)
{
	ImGui::PlotHistogram(label, values, values_count, values_offset, overlay_text, scale_min, scale_max, graph_size, stride);
}
bool GENERATE_BeginMenuBar()
{
	return ImGui::BeginMenuBar();
}
void GENERATE_EndMenuBar()
{
	ImGui::EndMenuBar();
}
bool GENERATE_BeginMainMenuBar()
{
	return ImGui::BeginMainMenuBar();
}
void GENERATE_EndMainMenuBar()
{
	ImGui::EndMainMenuBar();
}
bool GENERATE_BeginMenu(const char* label, bool enabled)
{
	return ImGui::BeginMenu(label, enabled);
}
void GENERATE_EndMenu()
{
	ImGui::EndMenu();
}
bool GENERATE_MenuItem(const char* label, const char* shortcut, bool* p_selected, bool enabled)
{
	return ImGui::MenuItem(label, shortcut, p_selected, enabled);
}
void GENERATE_BeginTooltip()
{
	ImGui::BeginTooltip();
}
void GENERATE_EndTooltip()
{
	ImGui::EndTooltip();
}
void GENERATE_SetTooltip(const char* fmt)
{
	ImGui::SetTooltip(fmt);
}
void GENERATE_SetTooltipV(const char* fmt, va_list args)
{
	ImGui::SetTooltipV(fmt, args);
}
bool GENERATE_BeginPopup(const char* str_id, ImGuiWindowFlags flags)
{
	return ImGui::BeginPopup(str_id, flags);
}
bool GENERATE_BeginPopupModal(const char* name, bool* p_open, ImGuiWindowFlags flags)
{
	return ImGui::BeginPopupModal(name, p_open, flags);
}
void GENERATE_EndPopup()
{
	ImGui::EndPopup();
}
void GENERATE_OpenPopup(const char* str_id, ImGuiPopupFlags popup_flags)
{
	ImGui::OpenPopup(str_id, popup_flags);
}
void GENERATE_OpenPopupOnItemClick(const char* str_id, ImGuiPopupFlags popup_flags)
{
	ImGui::OpenPopupOnItemClick(str_id, popup_flags);
}
void GENERATE_CloseCurrentPopup()
{
	ImGui::CloseCurrentPopup();
}
bool GENERATE_BeginPopupContextItem(const char* str_id, ImGuiPopupFlags popup_flags)
{
	return ImGui::BeginPopupContextItem(str_id, popup_flags);
}
bool GENERATE_BeginPopupContextWindow(const char* str_id, ImGuiPopupFlags popup_flags)
{
	return ImGui::BeginPopupContextWindow(str_id, popup_flags);
}
bool GENERATE_BeginPopupContextVoid(const char* str_id, ImGuiPopupFlags popup_flags)
{
	return ImGui::BeginPopupContextVoid(str_id, popup_flags);
}
bool GENERATE_IsPopupOpen(const char* str_id, ImGuiPopupFlags flags)
{
	return ImGui::IsPopupOpen(str_id, flags);
}
void GENERATE_Columns(int count, const char* id, bool border)
{
	ImGui::Columns(count, id, border);
}
void GENERATE_NextColumn()
{
	ImGui::NextColumn();
}
int GENERATE_GetColumnIndex()
{
	return ImGui::GetColumnIndex();
}
float GENERATE_GetColumnWidth(int column_index)
{
	return ImGui::GetColumnWidth(column_index);
}
void GENERATE_SetColumnWidth(int column_index, float width)
{
	ImGui::SetColumnWidth(column_index, width);
}
float GENERATE_GetColumnOffset(int column_index)
{
	return ImGui::GetColumnOffset(column_index);
}
void GENERATE_SetColumnOffset(int column_index, float offset_x)
{
	ImGui::SetColumnOffset(column_index, offset_x);
}
int GENERATE_GetColumnsCount()
{
	return ImGui::GetColumnsCount();
}
bool GENERATE_BeginTabBar(const char* str_id, ImGuiTabBarFlags flags)
{
	return ImGui::BeginTabBar(str_id, flags);
}
void GENERATE_EndTabBar()
{
	ImGui::EndTabBar();
}
bool GENERATE_BeginTabItem(const char* label, bool* p_open, ImGuiTabItemFlags flags)
{
	return ImGui::BeginTabItem(label, p_open, flags);
}
void GENERATE_EndTabItem()
{
	ImGui::EndTabItem();
}
bool GENERATE_TabItemButton(const char* label, ImGuiTabItemFlags flags)
{
	return ImGui::TabItemButton(label, flags);
}
void GENERATE_SetTabItemClosed(const char* tab_or_docked_window_label)
{
	ImGui::SetTabItemClosed(tab_or_docked_window_label);
}
void GENERATE_LogToTTY(int auto_open_depth)
{
	ImGui::LogToTTY(auto_open_depth);
}
void GENERATE_LogToFile(int auto_open_depth, const char* filename)
{
	ImGui::LogToFile(auto_open_depth, filename);
}
void GENERATE_LogToClipboard(int auto_open_depth)
{
	ImGui::LogToClipboard(auto_open_depth);
}
void GENERATE_LogFinish()
{
	ImGui::LogFinish();
}
void GENERATE_LogButtons()
{
	ImGui::LogButtons();
}
void GENERATE_LogText(const char* fmt)
{
	ImGui::LogText(fmt);
}
bool GENERATE_BeginDragDropSource(ImGuiDragDropFlags flags)
{
	return ImGui::BeginDragDropSource(flags);
}
bool GENERATE_SetDragDropPayload(const char* type, const void* data, size_t sz, ImGuiCond cond)
{
	return ImGui::SetDragDropPayload(type, data, sz, cond);
}
void GENERATE_EndDragDropSource()
{
	ImGui::EndDragDropSource();
}
bool GENERATE_BeginDragDropTarget()
{
	return ImGui::BeginDragDropTarget();
}
void GENERATE_EndDragDropTarget()
{
	ImGui::EndDragDropTarget();
}
void GENERATE_PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect)
{
	ImGui::PushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect);
}
void GENERATE_PopClipRect()
{
	ImGui::PopClipRect();
}
void GENERATE_SetItemDefaultFocus()
{
	ImGui::SetItemDefaultFocus();
}
void GENERATE_SetKeyboardFocusHere(int offset)
{
	ImGui::SetKeyboardFocusHere(offset);
}
bool GENERATE_IsItemHovered(ImGuiHoveredFlags flags)
{
	return ImGui::IsItemHovered(flags);
}
bool GENERATE_IsItemActive()
{
	return ImGui::IsItemActive();
}
bool GENERATE_IsItemFocused()
{
	return ImGui::IsItemFocused();
}
bool GENERATE_IsItemClicked(ImGuiMouseButton mouse_button)
{
	return ImGui::IsItemClicked(mouse_button);
}
bool GENERATE_IsItemVisible()
{
	return ImGui::IsItemVisible();
}
bool GENERATE_IsItemEdited()
{
	return ImGui::IsItemEdited();
}
bool GENERATE_IsItemActivated()
{
	return ImGui::IsItemActivated();
}
bool GENERATE_IsItemDeactivated()
{
	return ImGui::IsItemDeactivated();
}
bool GENERATE_IsItemDeactivatedAfterEdit()
{
	return ImGui::IsItemDeactivatedAfterEdit();
}
bool GENERATE_IsItemToggledOpen()
{
	return ImGui::IsItemToggledOpen();
}
bool GENERATE_IsAnyItemHovered()
{
	return ImGui::IsAnyItemHovered();
}
bool GENERATE_IsAnyItemActive()
{
	return ImGui::IsAnyItemActive();
}
bool GENERATE_IsAnyItemFocused()
{
	return ImGui::IsAnyItemFocused();
}
ImVec2 GENERATE_GetItemRectMin()
{
	return ImGui::GetItemRectMin();
}
ImVec2 GENERATE_GetItemRectMax()
{
	return ImGui::GetItemRectMax();
}
ImVec2 GENERATE_GetItemRectSize()
{
	return ImGui::GetItemRectSize();
}
void GENERATE_SetItemAllowOverlap()
{
	ImGui::SetItemAllowOverlap();
}
bool GENERATE_IsRectVisible(const ImVec2& size)
{
	return ImGui::IsRectVisible(size);
}
bool GENERATE_IsRectVisibleByMinMax(const ImVec2& rect_min, const ImVec2& rect_max)
{
	return ImGui::IsRectVisible(rect_min, rect_max);
}
double GENERATE_GetTime()
{
	return ImGui::GetTime();
}
int GENERATE_GetFrameCount()
{
	return ImGui::GetFrameCount();
}
ImDrawList* GENERATE_GetBackgroundDrawList()
{
	return ImGui::GetBackgroundDrawList();
}
ImDrawList* GENERATE_GetForegroundDrawList()
{
	return ImGui::GetForegroundDrawList();
}
ImDrawListSharedData* GENERATE_GetDrawListSharedData()
{
	return ImGui::GetDrawListSharedData();
}
const char* GENERATE_GetStyleColorName(ImGuiCol idx)
{
	return ImGui::GetStyleColorName(idx);
}
void GENERATE_SetStateStorage(ImGuiStorage* storage)
{
	ImGui::SetStateStorage(storage);
}
ImGuiStorage* GENERATE_GetStateStorage()
{
	return ImGui::GetStateStorage();
}
void GENERATE_CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end)
{
	ImGui::CalcListClipping(items_count, items_height, out_items_display_start, out_items_display_end);
}
bool GENERATE_BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags flags)
{
	return ImGui::BeginChildFrame(id, size, flags);
}
void GENERATE_EndChildFrame()
{
	ImGui::EndChildFrame();
}
ImVec2 GENERATE_CalcTextSize(const char* text, const char* text_end, bool hide_text_after_double_hash, float wrap_width)
{
	return ImGui::CalcTextSize(text, text_end, hide_text_after_double_hash, wrap_width);
}
ImVec4 GENERATE_ColorConvertU32ToFloat4(ImU32 in)
{
	return ImGui::ColorConvertU32ToFloat4(in);
}
ImU32 GENERATE_ColorConvertFloat4ToU32(const ImVec4& in)
{
	return ImGui::ColorConvertFloat4ToU32(in);
}
void GENERATE_ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v)
{
	ImGui::ColorConvertRGBtoHSV(r, g, b, out_h, out_s, out_v);
}
void GENERATE_ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b)
{
	ImGui::ColorConvertHSVtoRGB(h, s, v, out_r, out_g, out_b);
}
int GENERATE_GetKeyIndex(ImGuiKey imgui_key)
{
	return ImGui::GetKeyIndex(imgui_key);
}
bool GENERATE_IsKeyDown(int user_key_index)
{
	return ImGui::IsKeyDown(user_key_index);
}
bool GENERATE_IsKeyPressed(int user_key_index, bool repeat)
{
	return ImGui::IsKeyPressed(user_key_index, repeat);
}
bool GENERATE_IsKeyReleased(int user_key_index)
{
	return ImGui::IsKeyReleased(user_key_index);
}
int GENERATE_GetKeyPressedAmount(int key_index, float repeat_delay, float rate)
{
	return ImGui::GetKeyPressedAmount(key_index, repeat_delay, rate);
}
void GENERATE_CaptureKeyboardFromApp(bool want_capture_keyboard_value)
{
	ImGui::CaptureKeyboardFromApp(want_capture_keyboard_value);
}
bool GENERATE_IsMouseDown(ImGuiMouseButton button)
{
	return ImGui::IsMouseDown(button);
}
bool GENERATE_IsMouseClicked(ImGuiMouseButton button, bool repeat)
{
	return ImGui::IsMouseClicked(button, repeat);
}
bool GENERATE_IsMouseReleased(ImGuiMouseButton button)
{
	return ImGui::IsMouseReleased(button);
}
bool GENERATE_IsMouseDoubleClicked(ImGuiMouseButton button)
{
	return ImGui::IsMouseDoubleClicked(button);
}
bool GENERATE_IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip)
{
	return ImGui::IsMouseHoveringRect(r_min, r_max, clip);
}
bool GENERATE_IsMousePosValid(const ImVec2* mouse_pos)
{
	return ImGui::IsMousePosValid(mouse_pos);
}
bool GENERATE_IsAnyMouseDown()
{
	return ImGui::IsAnyMouseDown();
}
ImVec2 GENERATE_GetMousePos()
{
	return ImGui::GetMousePos();
}
ImVec2 GENERATE_GetMousePosOnOpeningCurrentPopup()
{
	return ImGui::GetMousePosOnOpeningCurrentPopup();
}
bool GENERATE_IsMouseDragging(ImGuiMouseButton button, float lock_threshold)
{
	return ImGui::IsMouseDragging(button, lock_threshold);
}
ImVec2 GENERATE_GetMouseDragDelta(ImGuiMouseButton button, float lock_threshold)
{
	return ImGui::GetMouseDragDelta(button, lock_threshold);
}
void GENERATE_ResetMouseDragDelta(ImGuiMouseButton button)
{
	ImGui::ResetMouseDragDelta(button);
}
ImGuiMouseCursor GENERATE_GetMouseCursor()
{
	return ImGui::GetMouseCursor();
}
void GENERATE_SetMouseCursor(ImGuiMouseCursor cursor_type)
{
	ImGui::SetMouseCursor(cursor_type);
}
void GENERATE_CaptureMouseFromApp(bool want_capture_mouse_value)
{
	ImGui::CaptureMouseFromApp(want_capture_mouse_value);
}
const char* GENERATE_GetClipboardText()
{
	return ImGui::GetClipboardText();
}
void GENERATE_SetClipboardText(const char* text)
{
	ImGui::SetClipboardText(text);
}
void GENERATE_LoadIniSettingsFromDisk(const char* ini_filename)
{
	ImGui::LoadIniSettingsFromDisk(ini_filename);
}
void GENERATE_LoadIniSettingsFromMemory(const char* ini_data, size_t ini_size=0)
{
	ImGui::LoadIniSettingsFromMemory(ini_data, ini_size=0);
}
void GENERATE_SaveIniSettingsToDisk(const char* ini_filename)
{
	ImGui::SaveIniSettingsToDisk(ini_filename);
}
const char* GENERATE_SaveIniSettingsToMemory(size_t* out_ini_size)
{
	return ImGui::SaveIniSettingsToMemory(out_ini_size);
}
bool GENERATE_DebugCheckVersionAndDataLayout(const char* version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx)
{
	return ImGui::DebugCheckVersionAndDataLayout(version_str, sz_io, sz_style, sz_vec2, sz_vec4, sz_drawvert, sz_drawidx);
}
void* GENERATE_MemAlloc(size_t size)
{
	return ImGui::MemAlloc(size);
}
void GENERATE_MemFree(void* ptr)
{
	ImGui::MemFree(ptr);
}

void bind_imgui_duktape_generate(duk_context *ptr_context)
{

	//bindFunc(ptr_context, "GetIO", GENERATE_GetIO);
	//bindFunc(ptr_context, "GetStyle", GENERATE_GetStyle);
	//bindFunc(ptr_context, "GetDrawData", GENERATE_GetDrawData);
	//bindFunc(ptr_context, "ShowDemoWindow", GENERATE_ShowDemoWindow);
	//bindFunc(ptr_context, "ShowAboutWindow", GENERATE_ShowAboutWindow);
	//bindFunc(ptr_context, "ShowMetricsWindow", GENERATE_ShowMetricsWindow);
	//bindFunc(ptr_context, "ShowStyleEditor", GENERATE_ShowStyleEditor);
	//bindFunc(ptr_context, "ShowStyleSelector", GENERATE_ShowStyleSelector);
	//bindFunc(ptr_context, "ShowFontSelector", GENERATE_ShowFontSelector);
	//bindFunc(ptr_context, "ShowUserGuide", GENERATE_ShowUserGuide);
	//bindFunc(ptr_context, "GetVersion", GENERATE_GetVersion);
	//bindFunc(ptr_context, "StyleColorsDark", GENERATE_StyleColorsDark);
	//bindFunc(ptr_context, "StyleColorsClassic", GENERATE_StyleColorsClassic);
	//bindFunc(ptr_context, "StyleColorsLight", GENERATE_StyleColorsLight);
	//bindFunc(ptr_context, "Begin", GENERATE_Begin);
	//bindFunc(ptr_context, "End", GENERATE_End);
	//bindFunc(ptr_context, "BeginChild", GENERATE_BeginChild);
	//bindFunc(ptr_context, "EndChild", GENERATE_EndChild);
	bindFunc(ptr_context, "IsWindowAppearing", GENERATE_IsWindowAppearing);
	bindFunc(ptr_context, "IsWindowCollapsed", GENERATE_IsWindowCollapsed);
	bindFunc(ptr_context, "IsWindowFocused", GENERATE_IsWindowFocused);
	bindFunc(ptr_context, "IsWindowHovered", GENERATE_IsWindowHovered);
	//bindFunc(ptr_context, "GetWindowDrawList", GENERATE_GetWindowDrawList);
	//bindFunc(ptr_context, "GetWindowPos", GENERATE_GetWindowPos);
	//bindFunc(ptr_context, "GetWindowSize", GENERATE_GetWindowSize);
	//bindFunc(ptr_context, "GetWindowWidth", GENERATE_GetWindowWidth);
	//bindFunc(ptr_context, "GetWindowHeight", GENERATE_GetWindowHeight);
	//bindFunc(ptr_context, "SetNextWindowPos", GENERATE_SetNextWindowPos);
	//bindFunc(ptr_context, "SetNextWindowSize", GENERATE_SetNextWindowSize);
	//bindFunc(ptr_context, "SetNextWindowSizeConstraints", GENERATE_SetNextWindowSizeConstraints);
	//bindFunc(ptr_context, "SetNextWindowContentSize", GENERATE_SetNextWindowContentSize);
	//bindFunc(ptr_context, "SetNextWindowCollapsed", GENERATE_SetNextWindowCollapsed);
	//bindFunc(ptr_context, "SetNextWindowFocus", GENERATE_SetNextWindowFocus);
	//bindFunc(ptr_context, "SetNextWindowBgAlpha", GENERATE_SetNextWindowBgAlpha);
	//bindFunc(ptr_context, "SetWindowPos", GENERATE_SetWindowPos);
	//bindFunc(ptr_context, "SetWindowPosByName", GENERATE_SetWindowPosByName);
	//bindFunc(ptr_context, "SetWindowSize", GENERATE_SetWindowSize);
	//bindFunc(ptr_context, "SetWindowSizeByName", GENERATE_SetWindowSizeByName);
	//bindFunc(ptr_context, "SetWindowCollapsed", GENERATE_SetWindowCollapsed);
	//bindFunc(ptr_context, "SetWindowCollapsedByName", GENERATE_SetWindowCollapsedByName);
	//bindFunc(ptr_context, "SetWindowFocus", GENERATE_SetWindowFocus);
	//bindFunc(ptr_context, "SetWindowFontScale", GENERATE_SetWindowFontScale);
	//bindFunc(ptr_context, "SetWindowFocus", GENERATE_SetWindowFocus);
	//bindFunc(ptr_context, "GetContentRegionMax", GENERATE_GetContentRegionMax);
	//bindFunc(ptr_context, "GetContentRegionAvail", GENERATE_GetContentRegionAvail);
	//bindFunc(ptr_context, "GetWindowContentRegionMin", GENERATE_GetWindowContentRegionMin);
	//bindFunc(ptr_context, "GetWindowContentRegionMax", GENERATE_GetWindowContentRegionMax);
	//bindFunc(ptr_context, "GetWindowContentRegionWidth", GENERATE_GetWindowContentRegionWidth);
	//bindFunc(ptr_context, "GetScrollX", GENERATE_GetScrollX);
	//bindFunc(ptr_context, "GetScrollY", GENERATE_GetScrollY);
	//bindFunc(ptr_context, "GetScrollMaxX", GENERATE_GetScrollMaxX);
	//bindFunc(ptr_context, "GetScrollMaxY", GENERATE_GetScrollMaxY);
	//bindFunc(ptr_context, "SetScrollX", GENERATE_SetScrollX);
	//bindFunc(ptr_context, "SetScrollY", GENERATE_SetScrollY);
	//bindFunc(ptr_context, "SetScrollHereX", GENERATE_SetScrollHereX);
	//bindFunc(ptr_context, "SetScrollHereY", GENERATE_SetScrollHereY);
	//bindFunc(ptr_context, "SetScrollFromPosX", GENERATE_SetScrollFromPosX);
	//bindFunc(ptr_context, "SetScrollFromPosY", GENERATE_SetScrollFromPosY);
	//bindFunc(ptr_context, "PushFont", GENERATE_PushFont);
	//bindFunc(ptr_context, "PopFont", GENERATE_PopFont);
	bindFunc(ptr_context, "PushStyleColor", GENERATE_PushStyleColor);
	bindFunc(ptr_context, "PopStyleColor", GENERATE_PopStyleColor);
	bindFunc(ptr_context, "PushStyleVar", GENERATE_PushStyleVar);
	bindFunc(ptr_context, "PopStyleVar", GENERATE_PopStyleVar);
	//bindFunc(ptr_context, "GetStyleColorVec4", GENERATE_GetStyleColorVec4);
	//bindFunc(ptr_context, "GetFont", GENERATE_GetFont);
	//bindFunc(ptr_context, "GetFontSize", GENERATE_GetFontSize);
	//bindFunc(ptr_context, "GetFontTexUvWhitePixel", GENERATE_GetFontTexUvWhitePixel);
	//bindFunc(ptr_context, "GetColorU32", GENERATE_GetColorU32);
	//bindFunc(ptr_context, "PushItemWidth", GENERATE_PushItemWidth);
	//bindFunc(ptr_context, "PopItemWidth", GENERATE_PopItemWidth);
	//bindFunc(ptr_context, "SetNextItemWidth", GENERATE_SetNextItemWidth);
	//bindFunc(ptr_context, "CalcItemWidth", GENERATE_CalcItemWidth);
	//bindFunc(ptr_context, "PushTextWrapPos", GENERATE_PushTextWrapPos);
	//bindFunc(ptr_context, "PopTextWrapPos", GENERATE_PopTextWrapPos);
	//bindFunc(ptr_context, "PushAllowKeyboardFocus", GENERATE_PushAllowKeyboardFocus);
	//bindFunc(ptr_context, "PopAllowKeyboardFocus", GENERATE_PopAllowKeyboardFocus);
	//bindFunc(ptr_context, "PushButtonRepeat", GENERATE_PushButtonRepeat);
	//bindFunc(ptr_context, "PopButtonRepeat", GENERATE_PopButtonRepeat);
	//bindFunc(ptr_context, "SameLine", GENERATE_SameLine);
	bindFunc(ptr_context, "Separator", GENERATE_Separator);
	//bindFunc(ptr_context, "NewLine", GENERATE_NewLine);
	//bindFunc(ptr_context, "Spacing", GENERATE_Spacing);
	//bindFunc(ptr_context, "Dummy", GENERATE_Dummy);
	//bindFunc(ptr_context, "Indent", GENERATE_Indent);
	//bindFunc(ptr_context, "Unindent", GENERATE_Unindent);
	//bindFunc(ptr_context, "BeginGroup", GENERATE_BeginGroup);
	//bindFunc(ptr_context, "EndGroup", GENERATE_EndGroup);
	//bindFunc(ptr_context, "GetCursorPos", GENERATE_GetCursorPos);
	//bindFunc(ptr_context, "GetCursorPosX", GENERATE_GetCursorPosX);
	//bindFunc(ptr_context, "GetCursorPosY", GENERATE_GetCursorPosY);
	//bindFunc(ptr_context, "SetCursorPos", GENERATE_SetCursorPos);
	//bindFunc(ptr_context, "SetCursorPosX", GENERATE_SetCursorPosX);
	//bindFunc(ptr_context, "SetCursorPosY", GENERATE_SetCursorPosY);
	//bindFunc(ptr_context, "GetCursorStartPos", GENERATE_GetCursorStartPos);
	//bindFunc(ptr_context, "GetCursorScreenPos", GENERATE_GetCursorScreenPos);
	//bindFunc(ptr_context, "SetCursorScreenPos", GENERATE_SetCursorScreenPos);
	//bindFunc(ptr_context, "AlignTextToFramePadding", GENERATE_AlignTextToFramePadding);
	//bindFunc(ptr_context, "GetTextLineHeight", GENERATE_GetTextLineHeight);
	//bindFunc(ptr_context, "GetTextLineHeightWithSpacing", GENERATE_GetTextLineHeightWithSpacing);
	//bindFunc(ptr_context, "GetFrameHeight", GENERATE_GetFrameHeight);
	//bindFunc(ptr_context, "GetFrameHeightWithSpacing", GENERATE_GetFrameHeightWithSpacing);
	//bindFunc(ptr_context, "PushID", GENERATE_PushID);
	//bindFunc(ptr_context, "PopID", GENERATE_PopID);
	//bindFunc(ptr_context, "GetID", GENERATE_GetID);
	bindFunc(ptr_context, "TextUnformatted", GENERATE_TextUnformatted);
	bindFunc(ptr_context, "ImGui_Text", GENERATE_Text);
	//bindFunc(ptr_context, "TextV", GENERATE_TextV);
	//bindFunc(ptr_context, "TextColored", GENERATE_TextColored);
	//bindFunc(ptr_context, "TextColoredV", GENERATE_TextColoredV);
	//bindFunc(ptr_context, "TextDisabled", GENERATE_TextDisabled);
	//bindFunc(ptr_context, "TextDisabledV", GENERATE_TextDisabledV);
	//bindFunc(ptr_context, "TextWrapped", GENERATE_TextWrapped);
	//bindFunc(ptr_context, "LabelText", GENERATE_LabelText);
	//bindFunc(ptr_context, "LabelTextV", GENERATE_LabelTextV);
	//bindFunc(ptr_context, "BulletText", GENERATE_BulletText);
	//bindFunc(ptr_context, "BulletTextV", GENERATE_BulletTextV);
	bindFunc(ptr_context, "Button", GENERATE_Button);
	//bindFunc(ptr_context, "SmallButton", GENERATE_SmallButton);
	//bindFunc(ptr_context, "InvisibleButton", GENERATE_InvisibleButton);
	//bindFunc(ptr_context, "ArrowButton", GENERATE_ArrowButton);
	//bindFunc(ptr_context, "Image", GENERATE_Image);
	//bindFunc(ptr_context, "ImageButton", GENERATE_ImageButton);
	//bindFunc(ptr_context, "Checkbox", GENERATE_Checkbox);
	//bindFunc(ptr_context, "CheckboxFlags", GENERATE_CheckboxFlags);
	//bindFunc(ptr_context, "RadioButton", GENERATE_RadioButton);
	//bindFunc(ptr_context, "ProgressBar", GENERATE_ProgressBar);
	//bindFunc(ptr_context, "Bullet", GENERATE_Bullet);
	//bindFunc(ptr_context, "BeginCombo", GENERATE_BeginCombo);
	//bindFunc(ptr_context, "EndCombo", GENERATE_EndCombo);
	//bindFunc(ptr_context, "Combo", GENERATE_Combo);
	//bindFunc(ptr_context, "DragFloat", GENERATE_DragFloat);
	//bindFunc(ptr_context, "DragFloat2", GENERATE_DragFloat2);
	//bindFunc(ptr_context, "DragFloat3", GENERATE_DragFloat3);
	//bindFunc(ptr_context, "DragFloat4", GENERATE_DragFloat4);
	//bindFunc(ptr_context, "DragFloatRange2", GENERATE_DragFloatRange2);
	//bindFunc(ptr_context, "DragInt", GENERATE_DragInt);
	//bindFunc(ptr_context, "DragInt2", GENERATE_DragInt2);
	//bindFunc(ptr_context, "DragInt3", GENERATE_DragInt3);
	//bindFunc(ptr_context, "DragInt4", GENERATE_DragInt4);
	//bindFunc(ptr_context, "DragIntRange2", GENERATE_DragIntRange2);
	//bindFunc(ptr_context, "DragScalar", GENERATE_DragScalar);
	//bindFunc(ptr_context, "DragScalarN", GENERATE_DragScalarN);
	//bindFunc(ptr_context, "SliderFloat", GENERATE_SliderFloat);
	//bindFunc(ptr_context, "SliderFloat2", GENERATE_SliderFloat2);
	//bindFunc(ptr_context, "SliderFloat3", GENERATE_SliderFloat3);
	//bindFunc(ptr_context, "SliderFloat4", GENERATE_SliderFloat4);
	//bindFunc(ptr_context, "SliderAngle", GENERATE_SliderAngle);
	//bindFunc(ptr_context, "SliderInt", GENERATE_SliderInt);
	//bindFunc(ptr_context, "SliderInt2", GENERATE_SliderInt2);
	//bindFunc(ptr_context, "SliderInt3", GENERATE_SliderInt3);
	//bindFunc(ptr_context, "SliderInt4", GENERATE_SliderInt4);
	//bindFunc(ptr_context, "SliderScalar", GENERATE_SliderScalar);
	//bindFunc(ptr_context, "SliderScalarN", GENERATE_SliderScalarN);
	//bindFunc(ptr_context, "VSliderFloat", GENERATE_VSliderFloat);
	//bindFunc(ptr_context, "VSliderInt", GENERATE_VSliderInt);
	//bindFunc(ptr_context, "VSliderScalar", GENERATE_VSliderScalar);
	//bindFunc(ptr_context, "InputText", GENERATE_InputText);
	//bindFunc(ptr_context, "InputTextMultiline", GENERATE_InputTextMultiline);
	//bindFunc(ptr_context, "InputTextWithHint", GENERATE_InputTextWithHint);
	//bindFunc(ptr_context, "InputFloat", GENERATE_InputFloat);
	//bindFunc(ptr_context, "InputFloat2", GENERATE_InputFloat2);
	//bindFunc(ptr_context, "InputFloat3", GENERATE_InputFloat3);
	//bindFunc(ptr_context, "InputFloat4", GENERATE_InputFloat4);
	//bindFunc(ptr_context, "InputInt", GENERATE_InputInt);
	//bindFunc(ptr_context, "InputInt2", GENERATE_InputInt2);
	//bindFunc(ptr_context, "InputInt3", GENERATE_InputInt3);
	//bindFunc(ptr_context, "InputInt4", GENERATE_InputInt4);
	//bindFunc(ptr_context, "InputDouble", GENERATE_InputDouble);
	//bindFunc(ptr_context, "InputScalar", GENERATE_InputScalar);
	//bindFunc(ptr_context, "InputScalarN", GENERATE_InputScalarN);
	//bindFunc(ptr_context, "ColorEdit3", GENERATE_ColorEdit3);
	//bindFunc(ptr_context, "ColorEdit4", GENERATE_ColorEdit4);
	//bindFunc(ptr_context, "ColorPicker3", GENERATE_ColorPicker3);
	//bindFunc(ptr_context, "ColorPicker4", GENERATE_ColorPicker4);
	//bindFunc(ptr_context, "ColorButton", GENERATE_ColorButton);
	//bindFunc(ptr_context, "SetColorEditOptions", GENERATE_SetColorEditOptions);
	//bindFunc(ptr_context, "TreeNode", GENERATE_TreeNode);
	//bindFunc(ptr_context, "TreeNodeWithStrId", GENERATE_TreeNodeWithStrId);
	//bindFunc(ptr_context, "TreeNodeEx", GENERATE_TreeNodeEx);
	//bindFunc(ptr_context, "TreeNodeExWithStrId", GENERATE_TreeNodeExWithStrId);
	//bindFunc(ptr_context, "TreePush", GENERATE_TreePush);
	//bindFunc(ptr_context, "TreePop", GENERATE_TreePop);
	//bindFunc(ptr_context, "GetTreeNodeToLabelSpacing", GENERATE_GetTreeNodeToLabelSpacing);
	//bindFunc(ptr_context, "CollapsingHeader", GENERATE_CollapsingHeader);
	//bindFunc(ptr_context, "SetNextItemOpen", GENERATE_SetNextItemOpen);
	//bindFunc(ptr_context, "Selectable", GENERATE_Selectable);
	//bindFunc(ptr_context, "ListBox", GENERATE_ListBox);
	//bindFunc(ptr_context, "ListBox", GENERATE_ListBox);
	//bindFunc(ptr_context, "ListBoxHeaderBySize", GENERATE_ListBoxHeaderBySize);
	//bindFunc(ptr_context, "ListBoxHeader", GENERATE_ListBoxHeader);
	//bindFunc(ptr_context, "ListBoxFooter", GENERATE_ListBoxFooter);
	//bindFunc(ptr_context, "PlotLines", GENERATE_PlotLines);
	//bindFunc(ptr_context, "PlotLines", GENERATE_PlotLines);
	//bindFunc(ptr_context, "PlotHistogram", GENERATE_PlotHistogram);
	//bindFunc(ptr_context, "PlotHistogram", GENERATE_PlotHistogram);
	//bindFunc(ptr_context, "BeginMenuBar", GENERATE_BeginMenuBar);
	//bindFunc(ptr_context, "EndMenuBar", GENERATE_EndMenuBar);
	//bindFunc(ptr_context, "BeginMainMenuBar", GENERATE_BeginMainMenuBar);
	//bindFunc(ptr_context, "EndMainMenuBar", GENERATE_EndMainMenuBar);
	//bindFunc(ptr_context, "BeginMenu", GENERATE_BeginMenu);
	//bindFunc(ptr_context, "EndMenu", GENERATE_EndMenu);
	//bindFunc(ptr_context, "MenuItem", GENERATE_MenuItem);
	//bindFunc(ptr_context, "BeginTooltip", GENERATE_BeginTooltip);
	//bindFunc(ptr_context, "EndTooltip", GENERATE_EndTooltip);
	//bindFunc(ptr_context, "SetTooltip", GENERATE_SetTooltip);
	//bindFunc(ptr_context, "SetTooltipV", GENERATE_SetTooltipV);
	//bindFunc(ptr_context, "BeginPopup", GENERATE_BeginPopup);
	//bindFunc(ptr_context, "BeginPopupModal", GENERATE_BeginPopupModal);
	//bindFunc(ptr_context, "EndPopup", GENERATE_EndPopup);
	//bindFunc(ptr_context, "OpenPopup", GENERATE_OpenPopup);
	//bindFunc(ptr_context, "OpenPopupOnItemClick", GENERATE_OpenPopupOnItemClick);
	//bindFunc(ptr_context, "CloseCurrentPopup", GENERATE_CloseCurrentPopup);
	//bindFunc(ptr_context, "BeginPopupContextItem", GENERATE_BeginPopupContextItem);
	//bindFunc(ptr_context, "BeginPopupContextWindow", GENERATE_BeginPopupContextWindow);
	//bindFunc(ptr_context, "BeginPopupContextVoid", GENERATE_BeginPopupContextVoid);
	//bindFunc(ptr_context, "IsPopupOpen", GENERATE_IsPopupOpen);
	//bindFunc(ptr_context, "Columns", GENERATE_Columns);
	//bindFunc(ptr_context, "NextColumn", GENERATE_NextColumn);
	//bindFunc(ptr_context, "GetColumnIndex", GENERATE_GetColumnIndex);
	//bindFunc(ptr_context, "GetColumnWidth", GENERATE_GetColumnWidth);
	//bindFunc(ptr_context, "SetColumnWidth", GENERATE_SetColumnWidth);
	//bindFunc(ptr_context, "GetColumnOffset", GENERATE_GetColumnOffset);
	//bindFunc(ptr_context, "SetColumnOffset", GENERATE_SetColumnOffset);
	//bindFunc(ptr_context, "GetColumnsCount", GENERATE_GetColumnsCount);
	//bindFunc(ptr_context, "BeginTabBar", GENERATE_BeginTabBar);
	//bindFunc(ptr_context, "EndTabBar", GENERATE_EndTabBar);
	//bindFunc(ptr_context, "BeginTabItem", GENERATE_BeginTabItem);
	//bindFunc(ptr_context, "EndTabItem", GENERATE_EndTabItem);
	//bindFunc(ptr_context, "TabItemButton", GENERATE_TabItemButton);
	//bindFunc(ptr_context, "SetTabItemClosed", GENERATE_SetTabItemClosed);
	//bindFunc(ptr_context, "LogToTTY", GENERATE_LogToTTY);
	//bindFunc(ptr_context, "LogToFile", GENERATE_LogToFile);
	//bindFunc(ptr_context, "LogToClipboard", GENERATE_LogToClipboard);
	//bindFunc(ptr_context, "LogFinish", GENERATE_LogFinish);
	//bindFunc(ptr_context, "LogButtons", GENERATE_LogButtons);
	//bindFunc(ptr_context, "LogText", GENERATE_LogText);
	//bindFunc(ptr_context, "BeginDragDropSource", GENERATE_BeginDragDropSource);
	//bindFunc(ptr_context, "SetDragDropPayload", GENERATE_SetDragDropPayload);
	//bindFunc(ptr_context, "EndDragDropSource", GENERATE_EndDragDropSource);
	//bindFunc(ptr_context, "BeginDragDropTarget", GENERATE_BeginDragDropTarget);
	//bindFunc(ptr_context, "EndDragDropTarget", GENERATE_EndDragDropTarget);
	//bindFunc(ptr_context, "PushClipRect", GENERATE_PushClipRect);
	//bindFunc(ptr_context, "PopClipRect", GENERATE_PopClipRect);
	//bindFunc(ptr_context, "SetItemDefaultFocus", GENERATE_SetItemDefaultFocus);
	//bindFunc(ptr_context, "SetKeyboardFocusHere", GENERATE_SetKeyboardFocusHere);
	//bindFunc(ptr_context, "IsItemHovered", GENERATE_IsItemHovered);
	//bindFunc(ptr_context, "IsItemActive", GENERATE_IsItemActive);
	//bindFunc(ptr_context, "IsItemFocused", GENERATE_IsItemFocused);
	//bindFunc(ptr_context, "IsItemClicked", GENERATE_IsItemClicked);
	//bindFunc(ptr_context, "IsItemVisible", GENERATE_IsItemVisible);
	//bindFunc(ptr_context, "IsItemEdited", GENERATE_IsItemEdited);
	//bindFunc(ptr_context, "IsItemActivated", GENERATE_IsItemActivated);
	//bindFunc(ptr_context, "IsItemDeactivated", GENERATE_IsItemDeactivated);
	//bindFunc(ptr_context, "IsItemDeactivatedAfterEdit", GENERATE_IsItemDeactivatedAfterEdit);
	//bindFunc(ptr_context, "IsItemToggledOpen", GENERATE_IsItemToggledOpen);
	//bindFunc(ptr_context, "IsAnyItemHovered", GENERATE_IsAnyItemHovered);
	//bindFunc(ptr_context, "IsAnyItemActive", GENERATE_IsAnyItemActive);
	//bindFunc(ptr_context, "IsAnyItemFocused", GENERATE_IsAnyItemFocused);
	//bindFunc(ptr_context, "GetItemRectMin", GENERATE_GetItemRectMin);
	//bindFunc(ptr_context, "GetItemRectMax", GENERATE_GetItemRectMax);
	//bindFunc(ptr_context, "GetItemRectSize", GENERATE_GetItemRectSize);
	//bindFunc(ptr_context, "SetItemAllowOverlap", GENERATE_SetItemAllowOverlap);
	//bindFunc(ptr_context, "IsRectVisible", GENERATE_IsRectVisible);
	//bindFunc(ptr_context, "IsRectVisibleByMinMax", GENERATE_IsRectVisibleByMinMax);
	//bindFunc(ptr_context, "GetTime", GENERATE_GetTime);
	//bindFunc(ptr_context, "GetFrameCount", GENERATE_GetFrameCount);
	//bindFunc(ptr_context, "GetBackgroundDrawList", GENERATE_GetBackgroundDrawList);
	//bindFunc(ptr_context, "GetForegroundDrawList", GENERATE_GetForegroundDrawList);
	//bindFunc(ptr_context, "GetDrawListSharedData", GENERATE_GetDrawListSharedData);
	//bindFunc(ptr_context, "GetStyleColorName", GENERATE_GetStyleColorName);
	//bindFunc(ptr_context, "SetStateStorage", GENERATE_SetStateStorage);
	//bindFunc(ptr_context, "GetStateStorage", GENERATE_GetStateStorage);
	//bindFunc(ptr_context, "CalcListClipping", GENERATE_CalcListClipping);
	//bindFunc(ptr_context, "BeginChildFrame", GENERATE_BeginChildFrame);
	//bindFunc(ptr_context, "EndChildFrame", GENERATE_EndChildFrame);
	//bindFunc(ptr_context, "CalcTextSize", GENERATE_CalcTextSize);
	//bindFunc(ptr_context, "ColorConvertU32ToFloat4", GENERATE_ColorConvertU32ToFloat4);
	//bindFunc(ptr_context, "ColorConvertFloat4ToU32", GENERATE_ColorConvertFloat4ToU32);
	//bindFunc(ptr_context, "ColorConvertRGBtoHSV", GENERATE_ColorConvertRGBtoHSV);
	//bindFunc(ptr_context, "ColorConvertHSVtoRGB", GENERATE_ColorConvertHSVtoRGB);
	//bindFunc(ptr_context, "GetKeyIndex", GENERATE_GetKeyIndex);
	//bindFunc(ptr_context, "IsKeyDown", GENERATE_IsKeyDown);
	//bindFunc(ptr_context, "IsKeyPressed", GENERATE_IsKeyPressed);
	//bindFunc(ptr_context, "IsKeyReleased", GENERATE_IsKeyReleased);
	//bindFunc(ptr_context, "GetKeyPressedAmount", GENERATE_GetKeyPressedAmount);
	//bindFunc(ptr_context, "CaptureKeyboardFromApp", GENERATE_CaptureKeyboardFromApp);
	//bindFunc(ptr_context, "IsMouseDown", GENERATE_IsMouseDown);
	//bindFunc(ptr_context, "IsMouseClicked", GENERATE_IsMouseClicked);
	//bindFunc(ptr_context, "IsMouseReleased", GENERATE_IsMouseReleased);
	//bindFunc(ptr_context, "IsMouseDoubleClicked", GENERATE_IsMouseDoubleClicked);
	//bindFunc(ptr_context, "IsMouseHoveringRect", GENERATE_IsMouseHoveringRect);
	//bindFunc(ptr_context, "IsMousePosValid", GENERATE_IsMousePosValid);
	//bindFunc(ptr_context, "IsAnyMouseDown", GENERATE_IsAnyMouseDown);
	//bindFunc(ptr_context, "GetMousePos", GENERATE_GetMousePos);
	//bindFunc(ptr_context, "GetMousePosOnOpeningCurrentPopup", GENERATE_GetMousePosOnOpeningCurrentPopup);
	//bindFunc(ptr_context, "IsMouseDragging", GENERATE_IsMouseDragging);
	//bindFunc(ptr_context, "GetMouseDragDelta", GENERATE_GetMouseDragDelta);
	//bindFunc(ptr_context, "ResetMouseDragDelta", GENERATE_ResetMouseDragDelta);
	//bindFunc(ptr_context, "GetMouseCursor", GENERATE_GetMouseCursor);
	//bindFunc(ptr_context, "SetMouseCursor", GENERATE_SetMouseCursor);
	//bindFunc(ptr_context, "CaptureMouseFromApp", GENERATE_CaptureMouseFromApp);
	//bindFunc(ptr_context, "GetClipboardText", GENERATE_GetClipboardText);
	//bindFunc(ptr_context, "SetClipboardText", GENERATE_SetClipboardText);
	//bindFunc(ptr_context, "LoadIniSettingsFromDisk", GENERATE_LoadIniSettingsFromDisk);
	//bindFunc(ptr_context, "LoadIniSettingsFromMemory", GENERATE_LoadIniSettingsFromMemory);
	//bindFunc(ptr_context, "SaveIniSettingsToDisk", GENERATE_SaveIniSettingsToDisk);
	//bindFunc(ptr_context, "SaveIniSettingsToMemory", GENERATE_SaveIniSettingsToMemory);
	//bindFunc(ptr_context, "DebugCheckVersionAndDataLayout", GENERATE_DebugCheckVersionAndDataLayout);
}
