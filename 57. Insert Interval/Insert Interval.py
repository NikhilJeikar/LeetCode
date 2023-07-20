from typing import List


def insert(intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
    Inserted = False
    for i in range(len(intervals)):
        if intervals[i][0] > newInterval[0]:
            intervals.insert(i, newInterval)
            Inserted = True
    if not Inserted:
        intervals.append(newInterval)
        Inserted = True
    if Inserted:
        i = 0
        while i < len(intervals) - 1:
            first = intervals.pop(i)
            second = intervals.pop(i)
            if first[0] <= second[0] <= first[1]:
                Ret = [first[0], max(second[1], first[1])]
                intervals.insert(i, Ret)
            else:
                intervals.insert(i, second)
                intervals.insert(i, first)
                i += 1

    return intervals

print(insert([[1, 5]], [2, 3]))
