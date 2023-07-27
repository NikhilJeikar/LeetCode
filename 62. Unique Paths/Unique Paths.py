def uniquePaths(m: int, n: int) -> int:
    Fact = [1]
    for i in range(1, m + n + 1):
        Fact.append(Fact[-1] * i)
    return int(Fact[(m-2+n)]/(Fact[m-1] * Fact[n-1]))


uniquePaths(3, 2)
