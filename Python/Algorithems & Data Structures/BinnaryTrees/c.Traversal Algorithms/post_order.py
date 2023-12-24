def post_order(root):
    if root:
        post_order(root.left)
        post_order(root.right)
        print(root.val)
