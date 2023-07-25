from typing import List


def exist(board: List[List[str]], word: str) -> bool:
    def Board(DupBoard: List[List[str]], word: str, pos: tuple):
        X, Y = pos
        print(pos)
        if len(word) == 0:
            return True
        if DupBoard[X][Y] != word[0]:
            return False
        if DupBoard[X][Y] == word[0] and len(word) == 1:
            return True
        Temp = DupBoard[X][Y]
        DupBoard[X][Y] = " "
        if X + 1 < len(DupBoard):
            if Board(DupBoard, word[1:], (X + 1, Y)):
                return True
        if Y + 1 < len(DupBoard[0]):
            if Board(DupBoard, word[1:], (X, Y + 1)):
                return True
        if X - 1 >= 0:
            if Board(DupBoard, word[1:], (X - 1, Y)):
                return True
        if Y - 1 >= 0:
            if Board(DupBoard, word[1:], (X, Y - 1)):
                return True
        DupBoard[X][Y] = Temp
    Src = board
    Pos = []
    for i in range(len(board)):
        for j in range(len(board[0])):
            if board[i][j] == word[0]:
                Pos.append((i, j))

    for i in Pos:
        print()
        if Board(Src, word, i):
            return True
    return False


print(exist([["C", "A", "A"], ["A", "A", "A"], ["B", "C", "D"]], "AAB"))
