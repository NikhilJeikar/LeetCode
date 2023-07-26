from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def rotateRight(head: Optional[ListNode], k: int) -> Optional[ListNode]:
    List = []
    start = head
    while start is not None:
        List.append(start)
        start = start.next
    if head is None:
        return None
    k = k % len(List)
    for i in range(k):
        temp = List.pop()
        if len(List) == 0:
            List.append(temp)
            break
        List[-1].next = None
        temp.next = List[0]
        List.insert(0, temp)
    return List[0]
