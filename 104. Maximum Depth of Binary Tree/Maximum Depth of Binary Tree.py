from typing import Optional


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def maxDepth(root: Optional[TreeNode]) -> int:
    def func(node):
        if node is None:
            return 0
        return max(func(node.left) + 1, func(node.right) + 1)

    return func(root)
