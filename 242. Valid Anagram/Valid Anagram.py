def isAnagram(s: str, t: str) -> bool:
    CS = Counter(s)
    CT = Counter(t)
    if set(CS.keys()) == set(CT.keys()):
        for i in CS.keys():
            if CS[i] != CT[i]:
                return False
        return True
    else:
        return False



isAnagram("anagram","nagaram")