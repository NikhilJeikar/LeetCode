from typing import List


def floodFill(image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
    def Coords(X, Y):
        return [(X, Y + 1), (X, Y - 1), (X + 1, Y), (X - 1, Y)]

    Stack = {(sr, sc)}
    while len(Stack) != 0:
        Base = Stack.pop()
        if image[Base[0]][Base[1]] == color:
            continue
        for i in Coords(Base[0], Base[1]):
            if len(image) > i[0] >= 0 and len(image[0]) > i[1] >= 0:
                if image[i[0]][i[1]] == image[Base[0]][Base[1]]:
                    Stack.add((i[0], i[1]))
        image[Base[0]][Base[1]] = color
    return image


for i in floodFill([[1, 1, 1], [1, 1, 0], [1, 0, 1]], 1, 1, 2):
    print(i)
