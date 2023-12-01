#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 */
void binary_tree_inorder(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_inorder(tree->left);
	}

	printf("%d\n", tree->n);

	if (tree->right != NULL)
	{
		binary_tree_inorder(tree->right);
	}
}
