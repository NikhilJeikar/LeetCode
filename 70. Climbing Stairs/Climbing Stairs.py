def climbStairs(n: int) -> int:
    def Fact(n):
        n = int(n)
        if n == 0:
            return 1
        return n * Fact(n - 1)

    N2 = n // 2
    N1 = n % 2
    Out = 0
    while N2 != -1:
        Out += (Fact(N2 + N1) // (Fact(N2) * Fact(N1)))
        N2 -= 1
        N1 += 2
    return Out


def climbStairsOptimized(n: int) -> int:
    Lis = [1, 1]
    for i in range(2, n + 1):
        Lis.append(Lis[i - 1] * i)
    N2 = n // 2
    N1 = n % 2
    Out = 0
    while N2 != -1:
        Out += (Lis[N2 + N1] // (Lis[N2] * Lis[N1]))
        N2 -= 1
        N1 += 2
    return Out
