from typing import List


def searchMatrix(matrix: List[List[int]], target: int) -> bool:
    LastRow = -1
    for i in range(len(matrix)):
        if target >= matrix[i][0]:
            LastRow = i
        else:
            break
    if LastRow == -1:
        return False
    for i in matrix[LastRow]:
        if target == i:
            return True
    return False
