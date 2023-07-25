from typing import List


def letterCasePermutation(self, s: str) -> List[str]:
    Que = [s]
    Pos = 0
    Temp = []
    Final = []
    while Pos != len(s):
        Final.extend(Que)
        if not list(Que[0])[Pos].isnumeric():

            for i in Que:
                i = list(i)
                Temp.append("".join(i))
                if i[Pos].isupper():
                    i[Pos] = i[Pos].lower()
                else:
                    i[Pos] = i[Pos].upper()
                Temp.append("".join(i))
            Que = Temp
            Temp = []

        Pos += 1
    return Que


print(letterCasePermutation("", "a1b2"))
