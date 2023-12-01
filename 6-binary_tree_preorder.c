#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 */
void binary_tree_preorder(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	printf("%d\n", tree->n);

	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
