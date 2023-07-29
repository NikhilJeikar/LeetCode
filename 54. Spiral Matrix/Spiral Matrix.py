from typing import List


def spiralOrder(matrix: List[List[int]]) -> List[int]:
    def Top(Mat: List[List[int]]):
        if len(Mat) != 0:
            return Mat.pop(0)
        return None

    def Bottom(Mat: List[List[int]]):
        if len(Mat) != 0:
            Temp = Mat.pop(-1)
            Temp.reverse()
            return Temp
        return None

    def Left(Mat: List[List[int]]):
        Temp = []
        if len(Mat) != 0:
            for i in Mat:
                if len(i) == 0:
                    return None
                Temp.append(i.pop(0))
            Temp.reverse()
            return Temp
        return None

    def Right(Mat: List[List[int]]):
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

    return Return