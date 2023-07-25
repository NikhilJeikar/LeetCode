from typing import List


def subsets(self, nums: List[int]) -> List[List[int]]:
    Collection = []

    def Inner(Lis, Current, depth):
        Collection.append(Current)
        if len(Lis) == 0:
            return
        j = 0
        for i in Lis:
            j += 1
            Inner(Lis[j:], Current + [i], depth + 1)

    Inner(nums, [], 0)
    return Collection

