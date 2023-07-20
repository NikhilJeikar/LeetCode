from typing import List


def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
    candidates = sorted(candidates)
    Out = []

    def inner(lis: List[int], Cur: List[int], Sum: int):
        if Sum == target:
            Out.append(Cur)
            return
        if Sum > target:
            return

        for i in range(len(lis)):
            if i > 0 and lis[i] == lis[i - 1]:
                continue
            inner(lis[i + 1:], Cur + [lis[i]], Sum + lis[i])

    inner(candidates, [], 0)
    return Out


print(combinationSum("", candidates=[10, 1, 2, 7, 6, 1, 5], target=8))
