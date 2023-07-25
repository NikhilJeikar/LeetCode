from typing import List


def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
    candidates = sorted(candidates)
    Out = []

    def inner(lis: List[int], Cur: List[int], Sum: int):
        if Sum == target:
            Out.append(Cur)
            return
        if Sum < target:
            j = 0
            for i in lis:
                if lis[j] <= target - Sum:
                    inner(lis[j:], Cur + [lis[j]], Sum + i)
                j += 1
        else:
            return

    inner(candidates, [], 0)
    return Out

print(combinationSum("", [2, 3, 6, 7], 7))
