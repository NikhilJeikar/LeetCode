class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def deleteNode(node):
    prev = None
    while node.next is not None:
        node.val = node.next.val
        prev = node
        node = node.next
    prev.next = None
