test_cpp_functions: list = [
    'ImGuiContext* CreateContext(ImFontAtlas* shared_font_atlas = NULL);',
    'void  DestroyContext(ImGuiContext* ctx = NULL);   ',
    'ImGuiContext* GetCurrentContext();',
    'void  SetCurrentContext(ImGuiContext* ctx);',
    'ImGuiIO&  GetIO();',
    'ImGuiStyle&   GetStyle(); ',
    'void  NewFrame(); ',
    'void  EndFrame(); ',
    'void  Render();   ',
    'ImDrawData*   GetDrawData();  ',
    'void  ShowDemoWindow(bool* p_open = NULL);',
    'void  ShowAboutWindow(bool* p_open = NULL);   ',
    'void  ShowMetricsWindow(bool* p_open = NULL); ',
    'void  ShowStyleEditor(ImGuiStyle* ref = NULL);',
    'bool  ShowStyleSelector(const char* label);   ',
    'void  ShowFontSelector(const char* label);',
    'void  ShowUserGuide();',
    'const char*   GetVersion();   ',
    'void  StyleColorsDark(ImGuiStyle* dst = NULL);',
    'void  StyleColorsClassic(ImGuiStyle* dst = NULL); ',
    'void  StyleColorsLight(ImGuiStyle* dst = NULL);   ',
    'bool  Begin(const char* name, bool* p_open = NULL, ImGuiWindowFlags flags = 0);',
    'void  End();',
    'bool  BeginChild(const char* str_id, const ImVec2& size = ImVec2(0, 0), bool border = false, ImGuiWindowFlags flags = 0);',
    'bool  BeginChild(ImGuiID id, const ImVec2& size = ImVec2(0, 0), bool border = false, ImGuiWindowFlags flags = 0);',
    'void  EndChild();',
    'bool  IsWindowAppearing();',
    'bool  IsWindowCollapsed();',
    'bool  IsWindowFocused(ImGuiFocusedFlags flags=0); ',
    'bool  IsWindowHovered(ImGuiHoveredFlags flags=0); ',
    'ImDrawList*   GetWindowDrawList();',
    'ImVec2 GetWindowPos(); ',
    'ImVec2 GetWindowSize();',
    'float GetWindowWidth();   ',
    'float GetWindowHeight();  ',
    'void  SetNextWindowPos(const ImVec2& pos, ImGuiCond cond = 0, const ImVec2& pivot = ImVec2(0, 0)); ',
    'void  SetNextWindowSize(const ImVec2& size, ImGuiCond cond = 0);  ',
    'void  SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeCallback custom_callback = NULL, void* custom_callback_data = NULL); ',
    'void  SetNextWindowContentSize(const ImVec2& size);   ',
    'void  SetNextWindowCollapsed(bool collapsed, ImGuiCond cond = 0); ',
    'void  SetNextWindowFocus();   ',
    'void  SetNextWindowBgAlpha(float alpha);  ',
    'void  SetWindowPos(const ImVec2& pos, ImGuiCond cond = 0);',
    'void  SetWindowSize(const ImVec2& size, ImGuiCond cond = 0);  ',
    'void  SetWindowCollapsed(bool collapsed, ImGuiCond cond = 0); ',
    'void  SetWindowFocus();   ',
    'void  SetWindowFontScale(float scale);',
    'void  SetWindowPos(const char* name, const ImVec2& pos, ImGuiCond cond = 0);  ',
    'void  SetWindowSize(const char* name, const ImVec2& size, ImGuiCond cond = 0);',
    'void  SetWindowCollapsed(const char* name, bool collapsed, ImGuiCond cond = 0);   ',
    'void  SetWindowFocus(const char* name);   ',
    'ImVec2 GetContentRegionMax();  ',
    'ImVec2 GetContentRegionAvail();',
    'ImVec2 GetWindowContentRegionMin();',
    'ImVec2 GetWindowContentRegionMax();',
    'float GetWindowContentRegionWidth();',
    'float GetScrollX();   ',
    'float GetScrollY();   ',
    'float GetScrollMaxX();',
    'float GetScrollMaxY();',
    'void  SetScrollX(float scroll_x); ',
    'void  SetScrollY(float scroll_y); ',
    'void  SetScrollHereX(float center_x_ratio = 0.5f);',
    'void  SetScrollHereY(float center_y_ratio = 0.5f);',
    'void  SetScrollFromPosX(float local_x, float center_x_ratio = 0.5f);  ',
    'void  SetScrollFromPosY(float local_y, float center_y_ratio = 0.5f);  ',
    'void  PushFont(ImFont* font); ',
    'void  PopFont();',
    'void  PushStyleColor(ImGuiCol idx, ImU32 col);',
    'void  PushStyleColor(ImGuiCol idx, const ImVec4& col);',
    'void  PopStyleColor(int count = 1);',
    'void  PushStyleVar(ImGuiStyleVar idx, float val);',
    'void  PushStyleVar(ImGuiStyleVar idx, const ImVec2& val);',
    'void  PopStyleVar(int count = 1);',
    'const ImVec4& GetStyleColorVec4(ImGuiCol idx);',
    'ImFont*   GetFont();  ',
    'float GetFontSize();  ',
    'ImVec2 GetFontTexUvWhitePixel();   ',
    'ImU32 GetColorU32(ImGuiCol idx, float alpha_mul = 1.0f);  ',
    'ImU32 GetColorU32(const ImVec4& col); ',
    'ImU32 GetColorU32(ImU32 col); ',
    'void  PushItemWidth(float item_width);',
    'void  PopItemWidth();',
    'void  SetNextItemWidth(float item_width); ',
    'float CalcItemWidth();',
    'void  PushTextWrapPos(float wrap_local_pos_x = 0.0f); ',
    'void  PopTextWrapPos();',
    'void  PushAllowKeyboardFocus(bool allow_keyboard_focus);  ',
    'void  PopAllowKeyboardFocus();',
    'void  PushButtonRepeat(bool repeat);  ',
    'void  PopButtonRepeat();',
    'void  Separator();',
    'void  SameLine(float offset_from_start_x=0.0f, float spacing=-1.0f);  ',
    'void  NewLine();  ',
    'void  Spacing();  ',
    'void  Dummy(const ImVec2& size);  ',
    'void  Indent(float indent_w = 0.0f);  ',
    'void  Unindent(float indent_w = 0.0f);',
    'void  BeginGroup();   ',
    'void  EndGroup(); ',
    'ImVec2 GetCursorPos(); ',
    'float GetCursorPosX();',
    'float GetCursorPosY();',
    'void  SetCursorPos(const ImVec2& local_pos);  ',
    'void  SetCursorPosX(float local_x);   ',
    'void  SetCursorPosY(float local_y);   //',
    'ImVec2 GetCursorStartPos();',
    'ImVec2 GetCursorScreenPos();   ',
    'void  SetCursorScreenPos(const ImVec2& pos);  ',
    'void  AlignTextToFramePadding();  ',
    'float GetTextLineHeight();',
    'float GetTextLineHeightWithSpacing(); ',
    'float GetFrameHeight();   ',
    'float GetFrameHeightWithSpacing();',
    'void  PushID(const char* str_id); ',
    'void  PushID(const char* str_id_begin, const char* str_id_end);   ',
    'void  PushID(const void* ptr_id); ',
    'void  PushID(int int_id); ',
    'void  PopID();',
    'ImGuiID   GetID(const char* str_id);  ',
    'ImGuiID   GetID(const char* str_id_begin, const char* str_id_end);',
    'ImGuiID   GetID(const void* ptr_id);',
    'void  TextUnformatted(const char* text, const char* text_end = NULL); ',
    'void  Text(const char* fmt, ...);',
    'void  TextV(const char* fmt, va_list args);',
    'void  TextColored(const ImVec4& col, const char* fmt, ...);',
    'void  TextColoredV(const ImVec4& col, const char* fmt, va_list args);',
    'void  TextDisabled(const char* fmt, ...);',
    'void  TextDisabledV(const char* fmt, va_list args);',
    'void  TextWrapped(const char* fmt, ...) ;',
    'void  TextWrappedV(const char* fmt, va_list args) ;',
    'void  LabelText(const char* label, const char* fmt, ...);',
    'void  LabelTextV(const char* label, const char* fmt, va_list args);',
    'void  BulletText(const char* fmt, ...);',
    'void  BulletTextV(const char* fmt, va_list args);',
    'bool  Button(const char* label, const ImVec2& size = ImVec2(0, 0));   ',
    'bool  SmallButton(const char* label); ',
    'bool  InvisibleButton(const char* str_id, const ImVec2& size, ImGuiButtonFlags flags = 0); ',
    'bool  ArrowButton(const char* str_id, ImGuiDir dir);  ',
    'void  Image(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0, 0), const ImVec2& uv1 = ImVec2(1,1), const ImVec4& tint_col = ImVec4(1,1,1,1), const ImVec4& border_col = ImVec4(0,0,0,0));',
    'bool  ImageButton(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0, 0),  const ImVec2& uv1 = ImVec2(1,1), int frame_padding = -1, const ImVec4& bg_col = ImVec4(0,0,0,0), const ImVec4& tint_col = ImVec4(1,1,1,1));',
    'bool  Checkbox(const char* label, bool* v);',
    'bool  CheckboxFlags(const char* label, unsigned int* flags, unsigned int flags_value);',
    'bool  RadioButton(const char* label, bool active);',
    'bool  RadioButton(const char* label, int* v, int v_button);   ',
    'void  ProgressBar(float fraction, const ImVec2& size_arg = ImVec2(-1, 0), const char* overlay = NULL);',
    'void  Bullet();   ',
    'bool  BeginCombo(const char* label, const char* preview_value, ImGuiComboFlags flags = 0);',
    'void  EndCombo(); ',
    'bool  Combo(const char* label, int* current_item, const char* const items[], int items_count, int popup_max_height_in_items = -1);',
    'bool  Combo(const char* label, int* current_item, const char* items_separated_by_zeros, int popup_max_height_in_items = -1);  ',
    'bool  Combo(const char* label, int* current_item, bool(*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int popup_max_height_in_items = -1);',
    'bool  DragFloat(const char* label, float* v, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0); ',
    'bool  DragFloat2(const char* label, float v[2], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  DragFloat3(const char* label, float v[3], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  DragFloat4(const char* label, float v[4], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* format = "%.3f", const char* format_max = NULL, ImGuiSliderFlags flags = 0);',
    'bool  DragInt(const char* label, int* v, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);  ',
    'bool  DragInt2(const char* label, int v[2], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  DragInt3(const char* label, int v[3], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  DragInt4(const char* label, int v[4], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* format = "%d", const char* format_max = NULL, ImGuiSliderFlags flags = 0);',
    'bool  DragScalar(const char* label, ImGuiDataType data_type, void* p_data, float v_speed, const void* p_min = NULL, const void* p_max = NULL, const char* format = NULL, ImGuiSliderFlags flags = 0);',
    'bool  DragScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, float v_speed, const void* p_min = NULL, const void* p_max = NULL, const char* format = NULL, ImGuiSliderFlags flags = 0);',
    'bool  SliderFloat(const char* label, float* v, float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0); ',
    'bool  SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  SliderAngle(const char* label, float* v_rad, float v_degrees_min = -360.0f, float v_degrees_max = +360.0f, const char* format = "%.0f deg", ImGuiSliderFlags flags = 0);',
    'bool  SliderInt(const char* label, int* v, int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  SliderScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format = NULL, ImGuiSliderFlags flags = 0);',
    'bool  SliderScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_min, const void* p_max, const char* format = NULL, ImGuiSliderFlags flags = 0);',
    'bool  VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* format = "%.3f", ImGuiSliderFlags flags = 0);',
    'bool  VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* format = "%d", ImGuiSliderFlags flags = 0);',
    'bool  VSliderScalar(const char* label, const ImVec2& size, ImGuiDataType data_type, void* p_data, const void* p_min, const void* p_max, const char* format = NULL, ImGuiSliderFlags flags = 0);',
    'bool  InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = NULL, void* user_data = NULL);',
    'bool  InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size = ImVec2(0, 0), ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = NULL, void* user_data = NULL);',
    'bool  InputTextWithHint(const char* label, const char* hint, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiInputTextCallback callback = NULL, void* user_data = NULL);',
    'bool  InputFloat(const char* label, float* v, float step = 0.0f, float step_fast = 0.0f, const char* format = "%.3f", ImGuiInputTextFlags flags = 0);',
    'bool  InputFloat2(const char* label, float v[2], const char* format = "%.3f", ImGuiInputTextFlags flags = 0);',
    'bool  InputFloat3(const char* label, float v[3], const char* format = "%.3f", ImGuiInputTextFlags flags = 0);',
    'bool  InputFloat4(const char* label, float v[4], const char* format = "%.3f", ImGuiInputTextFlags flags = 0);',
    'bool  InputInt(const char* label, int* v, int step = 1, int step_fast = 100, ImGuiInputTextFlags flags = 0);',
    'bool  InputInt2(const char* label, int v[2], ImGuiInputTextFlags flags = 0);',
    'bool  InputInt3(const char* label, int v[3], ImGuiInputTextFlags flags = 0);',
    'bool  InputInt4(const char* label, int v[4], ImGuiInputTextFlags flags = 0);',
    'bool  InputDouble(const char* label, double* v, double step = 0.0, double step_fast = 0.0, const char* format = "%.6f", ImGuiInputTextFlags flags = 0);',
    'bool  InputScalar(const char* label, ImGuiDataType data_type, void* p_data, const void* p_step = NULL, const void* p_step_fast = NULL, const char* format = NULL, ImGuiInputTextFlags flags = 0);',
    'bool  InputScalarN(const char* label, ImGuiDataType data_type, void* p_data, int components, const void* p_step = NULL, const void* p_step_fast = NULL, const char* format = NULL, ImGuiInputTextFlags flags = 0);',
    'bool  ColorEdit3(const char* label, float col[3], ImGuiColorEditFlags flags = 0);',
    'bool  ColorEdit4(const char* label, float col[4], ImGuiColorEditFlags flags = 0);',
    'bool  ColorPicker3(const char* label, float col[3], ImGuiColorEditFlags flags = 0);',
    'bool  ColorPicker4(const char* label, float col[4], ImGuiColorEditFlags flags = 0, const float* ref_col = NULL);',
    'bool  ColorButton(const char* desc_id, const ImVec4& col, ImGuiColorEditFlags flags = 0, ImVec2 size = ImVec2(0, 0)); ',
    'void  SetColorEditOptions(ImGuiColorEditFlags flags); ',
    'bool  TreeNode(const char* label);',
    'bool  TreeNode(const char* str_id, const char* fmt, ...) ;',
    'bool  TreeNode(const void* ptr_id, const char* fmt, ...) ;',
    'bool  TreeNodeV(const char* str_id, const char* fmt, va_list args) ;',
    'bool  TreeNodeV(const void* ptr_id, const char* fmt, va_list args) ;',
    'bool  TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags = 0);',
    'bool  TreeNodeEx(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) ;',
    'bool  TreeNodeEx(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) ;',
    'bool  TreeNodeExV(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args) ;',
    'bool  TreeNodeExV(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args) ;',
    'void  TreePush(const char* str_id);   ',
    'void  TreePush(const void* ptr_id = NULL);',
    'void  TreePop();  ',
    'float GetTreeNodeToLabelSpacing();',
    'bool  CollapsingHeader(const char* label, ImGuiTreeNodeFlags flags = 0);  ',
    'bool  CollapsingHeader(const char* label, bool* p_open, ImGuiTreeNodeFlags flags = 0); ',
    'void  SetNextItemOpen(bool is_open, ImGuiCond cond = 0);  ',
    'bool  Selectable(const char* label, bool selected = false, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0, 0)); ',
    'bool  Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0, 0));  ',
    'bool  ListBox(const char* label, int* current_item, const char* const items[], int items_count, int height_in_items = -1);',
    'bool  ListBox(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);',
    'bool  ListBoxHeader(const char* label, const ImVec2& size = ImVec2(0, 0)); ',
    'bool  ListBoxHeader(const char* label, int items_count, int height_in_items = -1); ',
    'void  ListBoxFooter();',
    'void  PlotLines(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0, 0), int stride = sizeof(float));',
    'void  PlotLines(const char* label, float(*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0, 0));',
    'void  PlotHistogram(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0, 0), int stride = sizeof(float));',
    'void  PlotHistogram(const char* label, float(*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0, 0));',
    'void  Value(const char* prefix, bool b);',
    'void  Value(const char* prefix, int v);',
    'void  Value(const char* prefix, unsigned int v);',
    'void  Value(const char* prefix, float v, const char* float_format = NULL);',
    'bool  BeginMenuBar(); ',
    'void  EndMenuBar();   ',
    'bool  BeginMainMenuBar(); ',
    'void  EndMainMenuBar();   ',
    'bool  BeginMenu(const char* label, bool enabled = true);  ',
    'void  EndMenu();  ',
    'bool  MenuItem(const char* label, const char* shortcut = NULL, bool selected = false, bool enabled = true);  ',
    'bool  MenuItem(const char* label, const char* shortcut, bool* p_selected, bool enabled = true);  ',
    'void  BeginTooltip(); ',
    'void  EndTooltip();',
    'void  SetTooltip(const char* fmt, ...) ;',
    'void  SetTooltipV(const char* fmt, va_list args) ;',
    'bool  BeginPopup(const char* str_id, ImGuiWindowFlags flags = 0); ',
    'bool  BeginPopupModal(const char* name, bool* p_open = NULL, ImGuiWindowFlags flags = 0); ',
    'void  EndPopup(); ',
    'void  OpenPopup(const char* str_id, ImGuiPopupFlags popup_flags = 0); ',
    'void  OpenPopupOnItemClick(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1);   ',
    'void  CloseCurrentPopup();',
    'bool  BeginPopupContextItem(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1);  ',
    'bool  BeginPopupContextWindow(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1);',
    'bool  BeginPopupContextVoid(const char* str_id = NULL, ImGuiPopupFlags popup_flags = 1);  ',
    'bool  IsPopupOpen(const char* str_id, ImGuiPopupFlags flags = 0); ',
    'void  Columns(int count = 1, const char* id = NULL, bool border = true);',
    'void  NextColumn();   ',
    'int   GetColumnIndex();   ',
    'float GetColumnWidth(int column_index = -1);  ',
    'void  SetColumnWidth(int column_index, float width);  ',
    'float GetColumnOffset(int column_index = -1); ',
    'void  SetColumnOffset(int column_index, float offset_x);  ',
    'int   GetColumnsCount();',
    'bool  BeginTabBar(const char* str_id, ImGuiTabBarFlags flags = 0);',
    'void  EndTabBar();',
    'bool  BeginTabItem(const char* label, bool* p_open = NULL, ImGuiTabItemFlags flags = 0); ',
    'void  EndTabItem();   ',
    'bool  TabItemButton(const char* label, ImGuiTabItemFlags flags = 0);  ',
    'void  SetTabItemClosed(const char* tab_or_docked_window_label);   ',
    'void  LogToTTY(int auto_open_depth = -1); ',
    'void  LogToFile(int auto_open_depth = -1, const char* filename = NULL);   ',
    'void  LogToClipboard(int auto_open_depth = -1);   ',
    'void  LogFinish();',
    'void  LogButtons();   ',
    'void  LogText(const char* fmt, ...) ;',
    'bool  BeginDragDropSource(ImGuiDragDropFlags flags = 0);  ',
    'bool  SetDragDropPayload(const char* type, const void* data, size_t sz, ImGuiCond cond = 0);  ',
    'void  EndDragDropSource();',
    'bool  BeginDragDropTarget();  ',
    'const ImGuiPayload*   AcceptDragDropPayload(const char* type, ImGuiDragDropFlags flags = 0);  ',
    'void  EndDragDropTarget();',
    'const ImGuiPayload*   GetDragDropPayload();   ',
    'void  PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect);',
    'void  PopClipRect();',
    'void  SetItemDefaultFocus();  ',
    'void  SetKeyboardFocusHere(int offset = 0);   ',
    'bool  IsItemHovered(ImGuiHoveredFlags flags = 0); ',
    'bool  IsItemActive(); ',
    'bool  IsItemFocused();',
    'bool  IsItemClicked(ImGuiMouseButton mouse_button = 0);   ',
    'bool  IsItemVisible();',
    'bool  IsItemEdited(); ',
    'bool  IsItemActivated();  ',
    'bool  IsItemDeactivated();',
    'bool  IsItemDeactivatedAfterEdit();   ',
    'bool  IsItemToggledOpen();',
    'bool  IsAnyItemHovered(); ',
    'bool  IsAnyItemActive();  ',
    'bool  IsAnyItemFocused(); ',
    'ImVec2 GetItemRectMin();   ',
    'ImVec2 GetItemRectMax();   ',
    'ImVec2 GetItemRectSize();  ',
    'void  SetItemAllowOverlap();  ',
    'bool  IsRectVisible(const ImVec2& size);  ',
    'bool  IsRectVisible(const ImVec2& rect_min, const ImVec2& rect_max);  ',
    'double GetTime();  ',
    'int   GetFrameCount();',
    'ImDrawList*   GetBackgroundDrawList();',
    'ImDrawList*   GetForegroundDrawList();',
    'ImDrawListSharedData* GetDrawListSharedData();',
    'const char*   GetStyleColorName(ImGuiCol idx);',
    'void  SetStateStorage(ImGuiStorage* storage); ',
    'ImGuiStorage* GetStateStorage();',
    'void  CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end);',
    'bool  BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags flags = 0); ',
    'void  EndChildFrame();',
    'ImVec2 CalcTextSize(const char* text, const char* text_end = NULL, bool hide_text_after_double_hash = false, float wrap_width = -1.0f);',
    'ImVec4 ColorConvertU32ToFloat4(ImU32 in);',
    'ImU32 ColorConvertFloat4ToU32(const ImVec4& in);',
    'void  ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v);',
    'void  ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b);',
    'int   GetKeyIndex(ImGuiKey imgui_key);',
    'bool  IsKeyDown(int user_key_index);  ',
    'bool  IsKeyPressed(int user_key_index, bool repeat = true);   ',
    'bool  IsKeyReleased(int user_key_index);  ',
    'int   GetKeyPressedAmount(int key_index, float repeat_delay, float rate); ',
    'void  CaptureKeyboardFromApp(bool want_capture_keyboard_value = true);',
    'bool  IsMouseDown(ImGuiMouseButton button);   ',
    'bool  IsMouseClicked(ImGuiMouseButton button, bool repeat = false);   ',
    'bool  IsMouseReleased(ImGuiMouseButton button);   ',
    'bool  IsMouseDoubleClicked(ImGuiMouseButton button);  ',
    'bool  IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip = true);',
    'bool  IsMousePosValid(const ImVec2* mouse_pos = NULL);',
    'bool  IsAnyMouseDown();   ',
    'ImVec2 GetMousePos();  ',
    'ImVec2 GetMousePosOnOpeningCurrentPopup(); ',
    'bool  IsMouseDragging(ImGuiMouseButton button, float lock_threshold = -1.0f); ',
    'ImVec2 GetMouseDragDelta(ImGuiMouseButton button = 0, float lock_threshold = -1.0f);   ',
    'void  ResetMouseDragDelta(ImGuiMouseButton button = 0);',
    'ImGuiMouseCursor GetMouseCursor();',
    'void  SetMouseCursor(ImGuiMouseCursor cursor_type);   ',
    'void  CaptureMouseFromApp(bool want_capture_mouse_value = true);  ',
    'const char*   GetClipboardText();',
    'void  SetClipboardText(const char* text);',
    'void  LoadIniSettingsFromDisk(const char* ini_filename);  ',
    'void  LoadIniSettingsFromMemory(const char* ini_data, size_t ini_size=0); ',
    'void  SaveIniSettingsToDisk(const char* ini_filename);',
    'const char*   SaveIniSettingsToMemory(size_t* out_ini_size = NULL);   ',
    'bool  DebugCheckVersionAndDataLayout(const char* version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx); ',
    'void  SetAllocatorFunctions(void* (*alloc_func)(size_t sz, void* user_data), void (*free_func)(void* ptr, void* user_data), void* user_data = NULL);',
    'void* MemAlloc(size_t size);',
    'void  MemFree(void* ptr);',
]


def test():
    x: str = ''
    for i in range(5):
        if x == "x":
            x = ''


def add_token(token: str, tokens: dict, name_flag: bool, param_flag: bool,
              return_type_flag: bool, namespace_flag: bool = False):
    params: list = tokens["params"]

    if param_flag:
        params.append(token)
    elif return_type_flag:
        tokens["return_type"] = token
    elif namespace_flag: # 이름보다 네임스페이스가 먼저 파싱되어야 함.
        tokens["namespace"] = token
    elif name_flag:
        tokens["name"] = token


def make_default_token(function_str: str) -> list:
    token_separator: dict = {
        " ": True,
        ",": True,
        "(": True,
        ")": True,
        ";": True
    }

    token_char: dict = {
        ",": True,
        "(": True,
        ")": True,
    }

    padding_tokens: dict = {
        "*": True,
        "&": True,
    }

    token: str = ""
    tokens: list = []

    for char in function_str:
        if token_separator.get(char):
            if len(token) > 0:
                tokens.append(token)
            token = ""

            if token_char.get(char):
                tokens.append(char)

            continue

        if padding_tokens.get(char) and len(tokens) > 0 and len(token) == 0:
            index: int = len(tokens) - 1
            tokens[index] = tokens[index] + char
            continue

        token += char

    return tokens


def identify_tokens(tokens: list) -> dict:
    # ( 왼쪽에 있는 건 함수 이름
    # 이름 왼쪽 있는 건 리턴 타입
    # ( 오른쪽에 있는 것부터는 파라미터들

    token_dict : dict = {
        "return_type": "",
        "function_name": "",
        "param_tokens": []  # TODO : 파라미터는 또 따로 해야징
    }

    name_find_flag = False

    for i in range(len(tokens)):
        token = tokens[i]

        if token == "(" and (not name_find_flag):
            name_find_flag = True
            token_dict["function_name"] = tokens[i - 1]
            token_dict["return_type"] = tokens[i - 2]
            token_dict["param_tokens"].append(tokens[i]) # 파라미터 토큰 시작
        elif name_find_flag:  # 파라미터임
            token_dict["param_tokens"].append(tokens[i])

    return token_dict


def identify_param_tokens(param_tokens: list) -> list:
    # param -> { type:, name: }
    param_list = []
    param_len = len(param_tokens)

    if param_len == 2:  # 괄호밖에 없음
        return []

    # 디폴트 벨류 길이가 어느정도 되는가?
    token_default_value_len: int = 0
    decode_default_value: bool = False
    clone_param_tokens = param_tokens.copy()
    default_value_depth = 0 # 소괄호 같은 것들

    for i in range(len(clone_param_tokens)):
        if i == 0:  # 처음이면 무시
            continue

        token = clone_param_tokens[i]

        if token == 'const':  # 뒷 토큰이랑 결합.
            clone_param_tokens[i + 1] = token + " " + clone_param_tokens[i + 1]
        elif token == "=":
            decode_default_value = True
            token_default_value_len = 1
        elif token == "(":
            default_value_depth += 1
            token_default_value_len += 1
        elif token == ")" and (i != param_len - 1): # 마지막은 아님
            default_value_depth -= 1
            token_default_value_len += 1
        elif (token == "," and default_value_depth == 0) or (i == param_len - 1):  # 이제 이 토큰은 끝. ,거나 끄팅거나.
            # 투 칸 빼진게 타입.
            param_type = clone_param_tokens[i - token_default_value_len - 2]
            param_name = clone_param_tokens[i - token_default_value_len - 1]
            param_list.append({"type": param_type, "name": param_name})

            decode_default_value = False
            token_default_value_len = 0
        elif decode_default_value:
            token_default_value_len += 1

    return param_list


def make_function(tokens: dict):
    return_type: str = tokens["return_type"]
    function_name: str = tokens["function_name"]
    param_names: str = ''
    params_str: str = ''
    params_len = len(tokens["params"])
    namespace = "ImGui::"

    for i in range(params_len):
        param = tokens["params"][i]
        params_str += param["type"] + " " + param["name"]
        param_names += param["name"]
        if i != params_len - 1:
            params_str += ", "
            param_names += ", "

    prefix = ""
    if return_type != "void":
        prefix = "return "

    function_head: str = '''{0} GENERATE_{1}({2})'''.format(return_type, function_name, params_str)
    function_body: str = "\n{\n\t" + prefix + namespace + function_name + "(" + param_names + ");\n}";

    return function_head + function_body


def make_bind(tokens: dict):
    script_context_name: str = 'ptr_context'
    return '''bindFunc({0}, "{1}", {2});'''.format(script_context_name, tokens["function_name"], "GENERATE_" + tokens["function_name"])


def execute():
    bind_list: list = []

    for func_str in test_cpp_functions:
        result = make_default_token(func_str)
        identify_token_result = identify_tokens(result)
        identify_token_result["params"] = identify_param_tokens(identify_token_result["param_tokens"])
        bind_list.append(make_bind(identify_token_result))
        print(make_function(identify_token_result))

    for bind in bind_list:
        print(bind)

execute()