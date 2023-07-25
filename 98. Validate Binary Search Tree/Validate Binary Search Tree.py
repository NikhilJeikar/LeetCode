    def isValidBST(root) -> bool:
        Out = []
        def Inorder(node):
            nonlocal Out
            if node is None:
                return
            Inorder(node.left)
            Out.append(node.val)
            Inorder(node.right)
        Inorder(root)
        if len(Out) != len(set(Out)):
            return False
        if Out == sorted(Out):
            return True
        return False