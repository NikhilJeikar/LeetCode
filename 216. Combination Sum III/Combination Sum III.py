from typing import List


def combinationSum3(self, k: int, n: int) -> List[List[int]]:
    candidates = [i for i in range(1, 10)]
    Out = []

    def inner(lis: List[int], Cur: List[int], Sum: int,depth:int):
        if Sum == n and depth == 0:
            Out.append(Cur)
            return
        if Sum > n:
            return

        for i in range(len(lis)):
            if i > 0 and lis[i] == lis[i - 1]:
                continue
            inner(lis[i + 1:], Cur + [lis[i]], Sum + lis[i],depth-1)

    inner(candidates, [], 0,k)
    return Out


print(combinationSum3("", 3, 7))
