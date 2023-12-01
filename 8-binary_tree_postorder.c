#include 'binary_trees.h'

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 */
void binary_tree_postorder(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left);
	}

	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right);
	}

	printf("%d\n", tree->n);
}
