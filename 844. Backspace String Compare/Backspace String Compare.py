def backspaceCompare(s: str, t: str) -> bool:
    S = []
    T = []
    for i in range(len(s)):
        if s[i] == '#':
            if len(S) - 1 > - 1:
                S.pop(len(S) - 1)
        else:
            S.append(s[i])

    for i in range(len(t)):
        if t[i] == '#':
            if len(T) - 1 > - 1:
                T.pop(len(T) - 1)
        else:
            T.append(t[i])
    if len(S) != len(T):
        return False
    for i in range(len(S)):
        if S[i] != T[i]:
            return False
    return True