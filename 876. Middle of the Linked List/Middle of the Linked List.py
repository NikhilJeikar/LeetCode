def middleNode(self, head):
    Nodes = []
    while head is not None:
        Nodes.append(head)
        head = head.next
    return Nodes[int(len(Nodes)/2)]