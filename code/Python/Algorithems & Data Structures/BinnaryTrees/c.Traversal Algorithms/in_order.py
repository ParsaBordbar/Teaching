def in_order(root):
    if root:
        in_order(root.left)
        print(root.val),
        in_order(root.right)
