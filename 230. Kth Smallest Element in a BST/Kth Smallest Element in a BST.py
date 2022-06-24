from typing import List, Optional

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right



def kthSmallest(root: Optional[TreeNode], k: int) -> int:
    Out = []

    def Traversal(inRoot: Optional[TreeNode]):
        if inRoot is not None:
            Traversal(inRoot.left)
            Out.append(inRoot.val)
            Traversal(inRoot.right)

    Traversal(root)
    return Out[k]