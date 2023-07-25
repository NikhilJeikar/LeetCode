from typing import List


def fullJustify(words: List[str], maxWidth: int) -> List[str]:
    out1 = []
    out2 = []
    length = 0
    for i in words:
        if len(i) + length + (1 if length > 0 else 0) <= maxWidth:
            length = len(i) + length + (1 if length > 0 else 0)
            out2.append(i)
        else:
            out1.append(out2)
            out2 = [i]
            length = len(i)
    out1.append(out2)

    ret = []
    for i_index, i in enumerate(out1):
        cur_len = 0
        for j in i:
            cur_len += len(j)
        spacing = maxWidth - cur_len
        words_count = len(i)

        avg_space = spacing // (words_count - 1) if words_count - 1 != 0 else 0
        extended = spacing % (words_count - 1) if words_count - 1 != 0 else 0
        if i_index == len(out1) - 1:
            temp = " ".join(i)
            if len(temp) != maxWidth:
                temp += ' ' * (maxWidth - len(temp))
            ret.append(temp)
            break
        temp = ""
        for index, j in enumerate(i):
            if index == len(i) - 1:
                temp += j
            else:
                temp += j + " " * avg_space
            if extended > 0:
                temp += " "
                extended -= 1
        if len(temp) != maxWidth:
            temp += ' ' * (maxWidth - len(temp))
        ret.append(temp)
    return ret


print(fullJustify(["What", "must", "be", "acknowledgment", "shall", "be"], 16))
