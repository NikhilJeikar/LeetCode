from typing import List


def uniquePathsWithObstacles(obstacleGrid: List[List[int]]) -> int:
    W = len(obstacleGrid) - 1
    H = len(obstacleGrid[0]) - 1
    Map = [[-1 for i in range(H+1)] for j in range(W+1)]

    def rec(X, Y):
        if X > W or Y > H:
            return 0
        if X == W and Y == H and obstacleGrid[X][Y] == 0:
            return 1
        if obstacleGrid[X][Y] != 0:
            return 0

        if Map[X][Y] > 0:
            return Map[X][Y]
        V1 = rec(X + 1, Y)
        V2 = rec(X, Y + 1)

        if V1 + V2 != 0:
            Map[X][Y] = V1 + V2

        return V1 + V2
    return rec(0, 0)