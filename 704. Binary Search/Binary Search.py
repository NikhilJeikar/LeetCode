from typing import List


def search(nums: List[int], target: int) -> int:
    L = 0
    R = len(nums) - 1
    while R >= L:
        Mid = L + (R - L) // 2
        print(L, R, Mid)
        if nums[Mid] == target:
            return Mid
        elif nums[Mid] > target:
            R = Mid - 1
        else:
            L = Mid + 1

