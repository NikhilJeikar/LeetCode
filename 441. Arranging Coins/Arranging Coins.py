from math import sqrt


def arrangeCoins(n: int) -> int:
    root1 = -((1 + sqrt((1 + 8 * n))) / 2)
    root2 = -((1 - sqrt((1 + 8 * n))) / 2)
    Out = []
    if root1 > 0:
        Out.append(root1)
    if root2 > 0:
        Out.append(root2)
    return int(max(Out))


print(arrangeCoins(5))
print(arrangeCoins(8))
