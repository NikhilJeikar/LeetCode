from typing import List


def generate(numRows: int) -> List[List[int]]:
    out = [[1], [1, 1]]
    for i in range(1, numRows):
        Temp = []
        for j in range(1, len(out[i])):
            Temp.append(out[i][j - 1] + out[i][j])
        Temp.append(1)
        Temp.insert(0, 1)
        out.append(Temp)
    return out[:numRows]


generate(5)
