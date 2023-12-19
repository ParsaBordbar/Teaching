# In-order traversal

# Left -> Root -> Right
def inOrderTraversal(self, root):
    res = []
    if root:
        res = self.inOrderTraversal(root.left)
        res.append(root.data)
        res = res + self.inOrderTraversal(root.right)
    return res

# In-Order(p){
# if (p==null) return;
# In-Order(p->left);
# cout << p->data;
# In-Order(p->right);
# }