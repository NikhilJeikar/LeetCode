from collections import defaultdict


def Check(arr):
    Table = defaultdict(int)
    for i in arr:
        Table[i] += 1
    Size = len(arr) / 2
    Out = 0
    Sum = 0
    for i in sorted(Table.values(), reverse=True):
        if Sum >= Size:
            break
        Out += 1
        Sum += i
    return Out


print(Check([3, 3, 3, 3, 5, 5, 5, 2, 2, 7]))
