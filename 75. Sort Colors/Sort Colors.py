from typing import List


def sortColors(nums: List[int]) -> None:
    Changed = True
    while Changed:
        Changed = False
        for i in range(1, len(nums)):
            if nums[i - 1] > nums[i]:
                nums[i], nums[i - 1] = nums[i - 1], nums[i]
                Changed = True
