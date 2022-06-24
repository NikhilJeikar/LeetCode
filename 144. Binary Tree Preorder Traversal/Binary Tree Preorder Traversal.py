class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
    Out = []

    def Inner(Root):
        if Root is not None:
            Out.append(Root.val)
            Inner(Root.left)
            Inner(Root.right)

    Inner(root)
    return Out
