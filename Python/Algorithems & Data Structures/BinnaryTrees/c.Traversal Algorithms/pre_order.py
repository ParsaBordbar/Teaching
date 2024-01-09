def pre_order(root):
    if root:
        print(root.val),
        pre_order(root.left)
        pre_order(root.right)
