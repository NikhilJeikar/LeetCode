from typing import List


def combine(self, n: int, k: int) -> List[List[int]]:
    lis = [i for i in range(1, n + 1)]
    Out = []

    def inner(nums, Curr, pos, Depth):
        if Depth == k:
            Out.append(Curr)
            return
        if len(nums)== 0:
            return
        j = 0
        for i in nums[pos:]:
            j += 1
            inner(nums, Curr + [i], pos + j, Depth + 1)

    inner(lis, [], 0, 0)
    return Out


combine("", 1, 1)
