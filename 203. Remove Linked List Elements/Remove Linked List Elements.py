def removeElements(head, val: int):
    Prev = None
    NewHead = None
    while head is not None:
        if head.val == val:
            if Prev is not None:
                Prev.next = head.next
        else:
            if Prev is None:
                NewHead = head
            Prev = head
        head = head.next
    return NewHead
