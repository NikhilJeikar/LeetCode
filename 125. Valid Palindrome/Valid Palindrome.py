def isPalindrome(s: str) -> bool:
    Ret = []
    for i in s:
        if i.isalnum():
            Ret.append(i.lower())
    Out = "".join(Ret)
    Ret.reverse()
    if Out == "".join(Ret):
        return True
    return False

isPalindrome("A man, a plan, a canal: Panama")