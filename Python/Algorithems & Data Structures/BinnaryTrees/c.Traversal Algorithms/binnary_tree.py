import pre_order, in_order, post_order
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
        
#     1
#    / \
#   2   3
#  / \
# 4   5

#Giving our Tree some values:
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)

print("PreOrder traversal of binary tree is")
pre_order.pre_order(root)

print("\nInOrder traversal of binary tree is")
in_order.in_order(root)

print("\nPostOrder traversal of binary tree is")
post_order.post_order(root)