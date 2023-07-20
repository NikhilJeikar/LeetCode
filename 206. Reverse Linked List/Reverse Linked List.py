    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        Lis = []
        Ptr = head
        while Ptr is not None:
            Lis.append(Ptr)
            Ptr = Ptr.next
        for i in range(len(Lis)-1,0,-1):
            Lis[i].next = Lis[i-1]
        if len(Lis)>0:
            Lis[0].next = None
            Ptr1 = Lis[len(Lis) - 1]
            while Ptr1 is not None:
                Ptr1 = Ptr1.next
            return Lis.pop()
        else:
            None