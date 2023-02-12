# Binary Trees
---
---
## Goal:
```
To achieve a logarithmic time O(log(h)) by
implementing a special type of Binary Tree
called a Binary Search Tree.
```

## The structure used:
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

Key:
    *parent is a pointer to the root node of the tree
    *left is a pointer to the left subtree of the parent
    *right is a pointer to the right subtree of the parent
```
---
---
### Contributor:
**Emmanuel Chalo**

[email](https://mail.google.com/mail/emusyoka759@gmail.com "Email") |
