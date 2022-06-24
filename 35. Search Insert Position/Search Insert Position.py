from typing import List


def search(nums: List[int], target: int) -> int:
    L = 0
    R = len(nums) - 1
    while R >= L:
        Mid = L + ((R - L) // 2)
        if nums[Mid] == target:
            return Mid
        elif nums[Mid] > target:
            R = Mid - 1
        else:
            L = Mid + 1
    return R + 1


print(search([1, 3, 5, 6], -1))
