def getPermutation(n: int, k: int) -> str:
    List = [i + 1 for i in range(n)]
    List.reverse()

    k -= 1

    def GetIndex(I_Fact, I_k):
        for index, i in enumerate(I_Fact):
            if i <= I_k:
                return index

    Fact = [1]
    for i in range(1, n):
        Fact.append(Fact[-1] * i)
    Ret = ''
    Pointer = len(List) - 1
    while len(List) != 0:
        InnerFact = [Fact[Pointer] * i for i in range(len(List))]
        InnerFact.reverse()
        index = GetIndex(InnerFact, k)
        val = List.pop(index)
        k -= InnerFact[index]
        Pointer -= 1
        Ret += str(val)
    return Ret


print(getPermutation(4, 9))
