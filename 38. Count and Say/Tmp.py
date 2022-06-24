def Fun(Str):
    prev = Str[0]
    count = 0
    out = ""
    for i in Str:
        if i == prev:
            count += 1
        else:
            out = out + str(count) + prev
            count = 1
            prev = i
    out = out + str(count) + prev
    return out


def Count(n):
    Data = "1"
    for i in range(1, n):
        Data = Fun(str(Data))
        print(Data)


Count(10)
