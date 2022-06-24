def hasCycle(head) -> bool:
    Set = set()
    while head is not None:
        if id(head) in Set:
            return True
        Set.add(id(head))
        head = head.next
    return False