    def isSymmetric(root):
        Break = False

        def Inner(LRoot, RRoot):
            nonlocal Break
            if LRoot is None and RRoot is None:
                return
            if LRoot is None:
                Break = True
                return
            if RRoot is None:
                Break = True
                return

            if LRoot.val != RRoot.val:
                Break = True
            Inner(LRoot.left, RRoot.right)
            Inner(LRoot.right, RRoot.left)

        Inner(root.left, root.right)
        return not Break