def Check(prices):
    Min = 100000
    Max = 0
    Sum = 0
    for i in prices:
        if i < Min or i < Max:
            if Max != 0:
                Sum = Sum + (Max - Min)
                Max = 0
            Min = i
        if i > Min:
            Max = i
    if Max != 0:
        Sum = Sum + (Max - Min)
    return Sum


TC = [[7, 1, 5, 3, 6, 4], [1, 2, 3, 4, 5], [7, 6, 4, 3, 1]]
Expected = [7, 4, 0]
for i in range(len(TC)):
    if Expected[i] == Check(TC[i]):
        print(f"Test case {i + 1} Pass")
    else:
        print(f"Test case {i + 1} Fail")
