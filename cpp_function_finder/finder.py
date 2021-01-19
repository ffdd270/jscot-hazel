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
    bind_name: str = tokens["name"]
    bind_function_name: str = tokens["name"]

    if len(tokens["namespace"]) > 0:
        bind_function_name = tokens["namespace"] + "::" + bind_function_name;

    bind_str: str = '''bindFunc("{0}", &{1})'''.format(bind_name, bind_function_name);
    return bind_str


for func_str in test_cpp_functions:
    result = make_default_token(func_str)
    identify_token_result = identify_tokens(result)
    identify_token_result["params"] = identify_param_tokens(identify_token_result["param_tokens"])
    print(identify_token_result)

