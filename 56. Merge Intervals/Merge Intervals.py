from typing import List


def Combine(Val1, Val2):
    if Val1[1] >= Val2[0]:
        return [Val1[0], max(Val2[1], Val1[1])]
    return None


def merge(intervals: List[List[int]]) -> List[List[int]]:
    Lis = sorted(intervals, key=lambda x: x[0])
    Out = []
    index = 0
    if len(intervals) < 2:
        return intervals
    for i in range(len(Lis)):
        if len(Out) == 0:
            Temp = Combine(Lis[0], Lis[i])
        else:
            Temp = Combine(Out[index], Lis[i])
            if Temp is not None:
                Out.pop(len(Out) - 1)
        if Temp is None:
            if len(Out) == 0:
                Out.append(Lis[0])
            else:
                index += 1
                Out.append(Lis[i])
        else:
            Out.append(Temp)
    return Out


merge([[1, 4], [5, 6]])
merge([[4, 5], [2, 4], [4, 6], [3, 4], [0, 0], [1, 1], [3, 5], [2, 2]])
merge([[1, 3], [2, 6], [8, 10], [15, 18]])
merge([[1, 4], [4, 5]])
