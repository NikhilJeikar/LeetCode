def getIntersectionNode(headA, headB):
    PointerA = []
    PointerB = []
    while headA is not None:
        PointerA.append(headA)
        headA = headA.next
    while headB is not None:
        PointerB.append(headB)
        headB = headB.next
    PointerA = PointerA[::-1]
    PointerB = PointerB[::-1]
    Out = None
    for i in range(min(len(PointerA), len(PointerB))):
        if PointerA[i] != PointerB[i]:
            return Out
        else:
            Out = PointerA[i]
    return Out
