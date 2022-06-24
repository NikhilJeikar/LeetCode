def isPalindrome(head) -> bool:
    List = []
    while head is not None:
        List.append(head.val)
        head = head.next
    RevList = List[::-1]
    for i in range(int(len(List) / 2)):
        if List[i] == RevList[i]:
            pass
        else:
            return False
    return True