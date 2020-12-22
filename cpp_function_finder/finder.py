test_cpp_functions : list[str] = [
    'void test();',
    'int tato();', 
    'int * ptr_return_type();',
    'int& ref_return_type();',
    'const int test_const_();'
]


def make_token( function_str : str ): 
    tokens : list[str] = []
    token : str = ""
    space_flag : bool = False


    for char in function_str: 
        if char == ";":  # 토큰 끝. 이건 확실하고..
            if token != "": 
                tokens.append( token )
            token = ""
            continue

        if char == " ": # 이건 아닐 수도 있음. space 플래그를 올리자.
            space_flag = True
            continue

        if space_flag and ( char == "*" or char == "&" ):  # 포인터, 레퍼런스면 토큰 확장. 
            space_flag = False
            token += char
        elif space_flag: # 스페이스 플래그가 올라간 상태에서 새로운 문장은 새로운 토큰. 
            space_flag = False
            if token != "": 
                tokens.append( token )
            token = char
        else: # 아니라면 기존 토큰을 더 길게.
            token += char

    return tokens


for function_str in test_cpp_functions: 
    print( make_token( function_str ) )
