    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        Out = []
        def Inner(node):
            nonlocal Out
            if node is None:
                return
            Inner(node.right)
            Inner(node.left)
            Out.append(node.val)
        Inner(root)
        return Out