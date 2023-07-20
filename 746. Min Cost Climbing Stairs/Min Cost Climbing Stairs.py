def minCostClimbingStairs(cost: List[int]) -> int:
    Out = [cost[0], cost[1]]
    i = 0
    for i in range(2, len(cost)):
        Out.append(min(Out[i - 1], Out[i - 2]) + cost[i])
    return min(Out[i - 1], Out[i])