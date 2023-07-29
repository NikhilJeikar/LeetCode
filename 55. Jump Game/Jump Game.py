from typing import List


def canJump(nums: List[int]) -> bool:
    Jumps = [False for i in range(len(nums))]
    Jumps[0] = True
    nums.pop()
    UpperBound = 0
    for index, i in enumerate(nums):
        if Jumps[-1]:
            return True
        if not Jumps[index]:
            return False
        for j in range(UpperBound - index, i + 1):
            if j + index >= len(Jumps):
                break
            Jumps[j + index] = True
            UpperBound = j + index
    return Jumps[-1]

print(canJump([0, 2, 3]))