def multiply(num1: str, num2: str) -> str:
    num1_list = [i for i in num1]
    num2_list = [i for i in num2]

    num1_int = 0
    num2_int = 0
    while len(num1_list) != 0:
        num1_int = num1_int * 10 + int(num1_list.pop(0))

    while len(num2_list) != 0:
        num2_int = num2_int * 10 + int(num2_list.pop(0))

    return str(num1_int * num2_int)


multiply("123", "654")
