def Check(nums):
    Zeros = []
    for i in range(len(nums)):
        if nums[i] == 0:
            Zeros.append(i)
    for i in Zeros[::-1]:
        nums.pop(i)
    for i in Zeros:
        nums.append(0)


Check([0, 1, 0, 3, 12])

