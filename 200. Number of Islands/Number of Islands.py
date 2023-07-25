from typing import List


def numIslands(grid: List[List[str]]) -> int:
    def IslandFiller(image, sr, sc, color):
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

    Data = grid
    Count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if Data[i][j] != "0":
                Count += 1
                Data = IslandFiller(Data, i, j, "0")
                print(Data)
    return Count


print(numIslands([
    ["1", "1", "1", "1", "0"],
    ["1", "1", "0", "1", "0"],
    ["1", "1", "0", "0", "0"],
    ["0", "0", "0", "0", "0"]
]))
