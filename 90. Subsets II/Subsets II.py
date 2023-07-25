from typing import List


def subsets(self, nums: List[int]) -> List[tuple]:
    Collection = []

    def Inner(Lis, Current):
        print(Current)
        Collection.append(Current)
        if len(Lis) == 0:
            return
        j = 0
        for i in Lis:
            j += 1
            Inner(Lis[j:], Current + [i])

    Inner(nums, [])
    return list(set([tuple(sorted(i)) for i in Collection]))


subsets("", [1, 2, 3])
