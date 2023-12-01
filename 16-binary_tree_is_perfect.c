#include 'binary_trees.h'

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftPerfect = 0;
	int rightPerfect = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		leftPerfect = binary_tree_is_perfect(tree->left);
	}
	if (tree->right != NULL)
	{
		rightPerfect = binary_tree_is_perfect(tree->right);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (leftPerfect == 1 && rightPerfect == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
