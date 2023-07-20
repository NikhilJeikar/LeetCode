def maxAscendingSum(self, nums: List[int]) -> int:
    Out = []
    Prev = 0
    Max = 0
    nums.append(0)
    for i in nums:
        if i > Prev:
            Prev = i
            Out.append(i)
        else:
            Prev = i
            Max = max(Max, sum(Out))
            Out = [i]
    return Max