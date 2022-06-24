    def setZeroes(self, matrix: List[List[int]]) -> None:
        X = set()
        Y = set()
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j] == 0:
                    X.add(i)
                    Y.add(j)

        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if i in X or j in Y:
                    matrix[i][j] = 0

