from collections import defaultdict


def Check(nums1, nums2):
    Table1 = defaultdict(int)
    Table2 = defaultdict(int)
    for i in nums1:
        Table1[i] += 1
    for i in nums2:
        Table2[i] += 1
    Common = set(Table1.keys()).intersection(Table2.keys())
    Total = []
    for i in Common:
        Temp = [i] * min(Table1[i], Table2[i])
        Total.extend(Temp)
    return Total


TC = [([1, 2, 2, 1], [2, 2]), ([4, 9, 5], [9, 4, 9, 8, 4])]
Expected = [[2, 2], [4, 9]]
for i in range(len(TC)):
    if Expected[i] == Check(TC[i][0], TC[i][1]):
        print(f"Test case {i + 1} Pass")
    else:
        print(f"Test case {i + 1} Fail")
