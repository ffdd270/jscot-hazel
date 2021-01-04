test_cpp_functions: list = [
    'void test();',
    'int tato();', 
    'int * ptr_return_type();',
    'int& ref_return_type();',
    'const int test_const_();',
    # 여기부터는 파라미터 테스트
    'void test_params( int a, int b );',
    'int test_param2s( int & a, int * b );',
    'void ImGui::Temp(int a, int b);'
]


def test():
    x: str = ''
    for i in range(5):
        if x == "x":
            x = ''


def add_token(token: str, tokens: dict, name_flag: bool, param_flag: bool, return_type_flag: bool):
    params: list = tokens["params"]

    if param_flag:
        params.append(token)
    elif return_type_flag:
        tokens["return_type"] = token
    elif name_flag:
        tokens["name"] = token


def make_token(function_str: str):
    tokens: dict = {"return_type": "", "name": "", "namespace": "", "params": []}
    space_flag: bool = False
    param_flag: bool = False
    name_flag: bool = True
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


def make_function(tokens: list):
    bind_str: str = '''bindFunc("{0}", &{0})'''.format(tokens["name"]);
    return bind_str


for func_str in test_cpp_functions:
    result = make_token(func_str)
    print(result)
    print(make_function(result))

