from typing import List


def generateMatrix(n: int) -> List[List[int]]:
    matrix = []
    for i in range(n):
        temp = []
        for j in range(n):
            temp.append((i, j))
        matrix.append(temp)

    def Top(Mat: List[List[tuple]]):
        if len(Mat) != 0:
            return Mat.pop(0)
        return None

    def Bottom(Mat: List[List[tuple]]):
        if len(Mat) != 0:
            Temp = Mat.pop(-1)
            Temp.reverse()
            return Temp
        return None

    def Left(Mat: List[List[tuple]]):
        Temp = []
        if len(Mat) != 0:
            for i in Mat:
                if len(i) == 0:
                    return None
                Temp.append(i.pop(0))
            Temp.reverse()
            return Temp
        return None

    def Right(Mat: List[List[tuple]]):
        Temp = []
        if len(Mat) != 0:
            for i in Mat:
                if len(i) == 0:
                    return None
                Temp.append(i.pop(-1))
            return Temp
        return None

    Return = []
    while len(matrix) != 0:
        temp = Top(matrix)
        if temp is None:
            break
        Return.extend(temp)

        temp = Right(matrix)
        if temp is None:
            break
        Return.extend(temp)

        temp = Bottom(matrix)
        if temp is None:
            break
        Return.extend(temp)

        temp = Left(matrix)
        if temp is None:
            break
        Return.extend(temp)

    Counter = 1
    matrix = [[-1 for j in range(n)] for i in range(n)]
    for i in Return:
        matrix[i[0]][i[1]] = Counter
        Counter += 1
    return matrix


generateMatrix(3)
