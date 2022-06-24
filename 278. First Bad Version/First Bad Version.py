def isBadVersion(version):
    pass


def firstBadVersion(n: int) -> int:
    L = 1
    R = n
    Good = -1
    while L <= R:
        Mid = L + (R - L) // 2
        if isBadVersion(Mid):
            R = Mid - 1
            Good = Mid
        else:
            L = Mid + 1
    return Good