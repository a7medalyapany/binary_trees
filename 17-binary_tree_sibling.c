#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sblng = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->left != node)
	{
		sblng = node->parent->left;
	}
	else if (node->parent->right != NULL && node->parent->right != node)
	{
		sblng = node->parent->right;
	}

	return (sblng);
}
