from typing import List, Optional
def findPeakElement(nums: List[int]) -> int:
    nums.insert(0, float("-inf"))
    nums.append(float("-inf"))
    L = 1
    R = len(nums) - 2
    while L <= R:
        Mid = L + (R - L) // 2
        if nums[Mid + 1] < nums[Mid] > nums[Mid - 1]:
            return Mid - 1
        elif nums[Mid] < nums[Mid + 1]:
            L = Mid + 1
        else:
            R = Mid - 1