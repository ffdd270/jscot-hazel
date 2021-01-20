test_cpp_functions: list = [
    "    IMGUI_API bool          IsWindowAppearing();",
    "    IMGUI_API bool          IsWindowCollapsed();",
    "    IMGUI_API bool          IsWindowFocused(ImGuiFocusedFlags flags=0); ",
    "    IMGUI_API bool          IsWindowHovered(ImGuiHoveredFlags flags=0); ",
    "    IMGUI_API ImDrawList*   GetWindowDrawList();                        ",
    "    IMGUI_API ImVec2        GetWindowPos();                             ",
    "    IMGUI_API ImVec2        GetWindowSize();                            ",
    "    IMGUI_API float         GetWindowWidth();                           ",
    "    IMGUI_API float         GetWindowHeight();                          ",
    "    IMGUI_API void          SetNextWindowPos(const ImVec2& pos, ImGuiCond cond = 0, const ImVec2& pivot = ImVec2(0, 0)); ",
    "    IMGUI_API void          SetNextWindowSize(const ImVec2& size, ImGuiCond cond = 0);                  ",
    "    IMGUI_API void          SetNextWindowSizeConstraints(const ImVec2& size_min, const ImVec2& size_max, ImGuiSizeCallback custom_callback = NULL, void* custom_callback_data = NULL); ",
    "    IMGUI_API void          SetNextWindowContentSize(const ImVec2& size);                               ",
    "    IMGUI_API void          SetNextWindowCollapsed(bool collapsed, ImGuiCond cond = 0);                 ",
    "    IMGUI_API void          SetNextWindowFocus();                                                       ",
    "    IMGUI_API void          SetNextWindowBgAlpha(float alpha);                                          ",
    "    IMGUI_API void          SetWindowPos(const ImVec2& pos, ImGuiCond cond = 0);                        ",
    "    IMGUI_API void          SetWindowSize(const ImVec2& size, ImGuiCond cond = 0);                      ",
    "    IMGUI_API void          SetWindowCollapsed(bool collapsed, ImGuiCond cond = 0);                     ",
    "    IMGUI_API void          SetWindowFocus();                                                           ",
    "    IMGUI_API void          SetWindowFontScale(float scale);                                            ",
    "    IMGUI_API void          SetWindowPos(const char* name, const ImVec2& pos, ImGuiCond cond = 0);      ",
    "    IMGUI_API void          SetWindowSize(const char* name, const ImVec2& size, ImGuiCond cond = 0);    ",
    "    IMGUI_API void          SetWindowCollapsed(const char* name, bool collapsed, ImGuiCond cond = 0);   ",
    "    IMGUI_API void          SetWindowFocus(const char* name);                                           ",
    "    IMGUI_API ImVec2        GetContentRegionAvail();                                        ",
    "    IMGUI_API ImVec2        GetContentRegionMax();                                          ",
    "    IMGUI_API ImVec2        GetWindowContentRegionMin();                                    ",
    "    IMGUI_API ImVec2        GetWindowContentRegionMax();                                    ",
    "    IMGUI_API float         GetWindowContentRegionWidth();                                  ",
    "    IMGUI_API float         GetScrollX();                                                   ",
    "    IMGUI_API float         GetScrollY();                                                   ",
    "    IMGUI_API void          SetScrollX(float scroll_x);                                     ",
    "    IMGUI_API void          SetScrollY(float scroll_y);                                     ",
    "    IMGUI_API float         GetScrollMaxX();                                                ",
    "    IMGUI_API float         GetScrollMaxY();                                                ",
    "    IMGUI_API void          SetScrollHereX(float center_x_ratio = 0.5f);                    ",
    "    IMGUI_API void          SetScrollHereY(float center_y_ratio = 0.5f);                    ",
    "    IMGUI_API void          SetScrollFromPosX(float local_x, float center_x_ratio = 0.5f);  ",
    "    IMGUI_API void          SetScrollFromPosY(float local_y, float center_y_ratio = 0.5f);  ",
    "    IMGUI_API void          PushFont(ImFont* font);                                         ",
    "    IMGUI_API void          PopFont();",
    "    IMGUI_API void          PushStyleColor(ImGuiCol idx, ImU32 col);                        ",
    "    IMGUI_API void          PushStyleColor(ImGuiCol idx, const ImVec4& col);",
    "    IMGUI_API void          PopStyleColor(int count = 1);",
    "    IMGUI_API void          PushStyleVar(ImGuiStyleVar idx, float val);                     ",
    "    IMGUI_API void          PushStyleVar(ImGuiStyleVar idx, const ImVec2& val);             ",
    "    IMGUI_API void          PopStyleVar(int count = 1);",
    "    IMGUI_API void          PushAllowKeyboardFocus(bool allow_keyboard_focus);              ",
    "    IMGUI_API void          PopAllowKeyboardFocus();",
    "    IMGUI_API void          PushButtonRepeat(bool repeat);                                  ",
    "    IMGUI_API void          PopButtonRepeat();",
    "    IMGUI_API void          PushItemWidth(float item_width);                                ",
    "    IMGUI_API void          PopItemWidth();",
    "    IMGUI_API void          SetNextItemWidth(float item_width);                             ",
    "    IMGUI_API float         CalcItemWidth();                                                ",
    "    IMGUI_API void          PushTextWrapPos(float wrap_local_pos_x = 0.0f);                 ",
    "    IMGUI_API void          PopTextWrapPos();",
    "    IMGUI_API ImFont*       GetFont();                                                      ",
    "    IMGUI_API float         GetFontSize();                                                  ",
    "    IMGUI_API ImVec2        GetFontTexUvWhitePixel();                                       ",
    "    IMGUI_API ImU32         GetColorU32(ImGuiCol idx, float alpha_mul = 1.0f);              ",
    "    IMGUI_API ImU32         GetColorU32(const ImVec4& col);                                 ",
    "    IMGUI_API ImU32         GetColorU32(ImU32 col);                                         ",
    "    IMGUI_API const ImVec4& GetStyleColorVec4(ImGuiCol idx);                                ",
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
    script_context_name: str = 'lua_context'
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