#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t levs = 0;

	if (tree)
	{
		levs += (!tree->left && !tree->right) ? 1 : 0;
		levs += binary_tree_leaves(tree->left);
		levs += binary_tree_leaves(tree->right);
	}
	return (levs);
}
