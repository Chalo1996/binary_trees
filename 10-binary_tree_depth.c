#include "binary_trees.h"

/**
  * binary_tree_depth - measures the depth of a node in a binary tree
  * @tree: pointer to the node to measure the depth
  *
  * Return: depth of the tree
  *
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		depth++;
	depth++;

	binary_tree_depth(tree->left);
	binary_tree_depth(tree->right);

	if (tree->parent == NULL)
		return (0);

	return (depth);
}