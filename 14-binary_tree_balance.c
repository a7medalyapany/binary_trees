#include 'binary_trees.h'

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight = 0;
	int rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		leftHeight = binary_tree_height(tree->left);
		leftHeight++;
	}
	if (tree->right != NULL)
	{
		rightHeight = binary_tree_height(tree->right);
		rightHeight++;
	}

	return (leftHeight - rightHeight);
}
