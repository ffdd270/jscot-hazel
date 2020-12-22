test_cpp_functions : list[str] = [
    'void test();',
    'int tato();'
]


def make_token( function_str : str ): 
    tokens : list[str] = []
    token : str = ""


    for char in function_str: 
        if char == " " or char == ";":  # 토큰 끝... 이 아닐 수도 있음. 포인터랑 const는 마음대로 어떤 위치든 넣을 수 있어서..
            if token != "": 
                tokens.append( token )
            token = ""
            continue

        token += char

    

    return tokens


print( make_token( test_cpp_functions[0] )  )