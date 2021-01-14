test_cpp_functions: list = [
    'void test();',
    'int tato();', 
    'int * ptr_return_type();',
    'int& ref_return_type();',
    'const int test_const_();',
    # 여기부터는 파라미터 테스트
    'void test_params( int a, int b );',
    'int test_param2s( int & a, int * b );',
    'void ImGui::Temp(int a, int b);',
    '    IMGUI_API ImGuiContext* CreateContext(ImFontAtlas* shared_font_atlas = NULL);',
    '    IMGUI_API ImGuiContext* GetCurrentContext();',
    'IMGUI_API void          SetNextWindowPos(const ImVec2& pos, ImGuiCond cond = 0, const ImVec2& pivot = ImVec2(0, 0)); '
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


def make_token(function_str: str):
    tokens: dict = {"return_type": "", "name": "", "namespace": "", "params": []}
    space_flag: bool = False
    param_flag: bool = False
    name_flag: bool = True
    namespace_flag: bool = False
    return_type_flag: bool = True
    token: str = ""

    token_continue_list = {"const": True}

    for char in function_str:
        if char == ";":  # 토큰 끝. 이건 확실하고..
            add_token(token, tokens, name_flag, param_flag, return_type_flag)
            token = ""
            continue
        if char == " ":  # 이건 아닐 수도 있음. space 플래그를 올리자.
            space_flag = True
            continue
        if space_flag and (char == "*" or char == "&"):  # 포인터, 레퍼런스면 토큰 확장.
            space_flag = False
            token += char
        elif char == "(":  # 새로운 토큰 시작
            add_token(token, tokens, name_flag, param_flag, return_type_flag)
            param_flag = True
            name_flag = False
            token = ""
        elif char == ":":  # 네임스페이스 토큰 시작 OR 끝
            if not namespace_flag: # 한번은 튕기고. 두번째 부터 읽는다.
                namespace_flag = True
                continue
            add_token(token, tokens, name_flag, param_flag, return_type_flag, namespace_flag)
            token = ""
        elif char == ")":  # 파람 플래그 끝
            add_token(token, tokens, name_flag, param_flag, return_type_flag)
            param_flag = False
            token = ""
        elif char == ",": 
            continue  # SKIP.
        elif space_flag:  # 스페이스 플래그가 올라간 상태에서 새로운 문장은 새로운 토큰.
            space_flag = False
            if token != "":
                if token_continue_list.get(token):
                    token += " " + char
                    continue

                add_token(token, tokens, name_flag, param_flag, return_type_flag)
                if return_type_flag:
                    return_type_flag = False
            token = char
        else:  # 아니라면 기존 토큰을 더 길게.
            token += char

    return tokens


def make_function(tokens: dict):
    bind_name: str = tokens["name"]
    bind_function_name: str = tokens["name"]

    if len(tokens["namespace"]) > 0:
        bind_function_name = tokens["namespace"] + "::" + bind_function_name;

    bind_str: str = '''bindFunc("{0}", &{1})'''.format(bind_name, bind_function_name);
    return bind_str


for func_str in test_cpp_functions:
    result = make_default_token(func_str)
    print(result)

