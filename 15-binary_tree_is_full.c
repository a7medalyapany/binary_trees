#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftFull = 0;
	int rightFull = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		leftFull = binary_tree_is_full(tree->left);
	}
	if (tree->right != NULL)
	{
		rightFull = binary_tree_is_full(tree->right);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (leftFull == 1 && rightFull == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
