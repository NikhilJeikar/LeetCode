from typing import List


def merge(nums1: List[int], m: int, nums2: List[int], n: int) -> None:
    index1 = 0
    index2 = 0

    result = []

    while index1 != m and index2 != n:
        if nums1[index1] > nums2[index2]:
            result.append(nums2[index2])
            index2 += 1
        else:
            result.append(nums1[index1])
            index1 += 1

    while index1 != m:
        result.append(nums1[index1])
        index1 += 1

    while index2 != n:
        result.append(nums2[index2])
        index2 += 1
    for i in range(len(nums1)):
        nums1[i] = result[i]


nums = [1, 2, 3, 0, 0, 0]
merge(nums, 3, [2, 5, 6], 3)
print(nums)
