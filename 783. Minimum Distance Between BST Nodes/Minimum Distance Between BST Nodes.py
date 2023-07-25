    def minDiffInBST(root):
        Lis = []
        def Inner(node):
            nonlocal Lis
            if node is None:
                return
            Inner(node.left)
            Lis.append(node.val)
            Inner(node.right)
        Inner(root)
        Diff = float("inf")
        for i in range(1,len(Lis)) :
            Diff = min(Diff,Lis[i] - Lis[i-1])
        
        return Diff