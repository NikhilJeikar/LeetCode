    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        Out = []
        def Inner(node):
            nonlocal Out
            if node is None:
                return
            Inner(node.left)
            Out.append(node.val)
            Inner(node.right)
        Inner(root)
        return Out