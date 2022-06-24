def Check(nums):
    if len(set(nums)) == len(nums):
        return False
    return True


TC = [[1, 2, 3, 1], [1, 2, 3, 4], [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]]
Expected = [True, False, True]
for i in range(len(TC)):
    if Expected[i] == Check(TC[i]):
        print(f"Test case {i + 1} Pass")
    else:
        print(f"Test case {i + 1} Fail")
