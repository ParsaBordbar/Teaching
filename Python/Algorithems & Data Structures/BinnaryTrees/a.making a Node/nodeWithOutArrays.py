# struct node
# {
#  int data;
#  struct node *left;
#  struct node *right;
# };

class Node:
   def __init__(self, data):
      self.data = data
      self.left = None
      self.right = None
   def PrintTree(self):
      print("Node's data is:", self.data)

root = Node(9)
root.PrintTree()