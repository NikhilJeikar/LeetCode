from typing import List


def intersection(nums1: List[int], nums2: List[int]) -> List[int]:
    S1 = set(nums1)
    S2 = set(nums2)
    return list(S1.intersection(S2))


print(intersection([3, 1, 2], [1, 3]))
