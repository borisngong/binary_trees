#include "binary_trees.h"
/**
 * binary_tree_height - Responsible for measuring the height of the tree.
 * @tree: Represents a pointer to the root node of the tree.
 * Return: Height of tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_longii = 1;
	size_t right_longii = 1;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
		left_longii = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_longii = 1 + binary_tree_height(tree->right);

	return ((left_longii > right_longii) ? left_longii : right_longii);
}

/**
 * binary_tree_balance - Responsible for measuring the balance tree factor.
 * @tree: Represents pointer to the root node of the tree.
 * Return: Balance factor of the balance tree, 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;
	int left_longii = 0;
	int right_longii = 0;

	if (current_node == NULL)
	{
		return (0);
	}

	left_longii = binary_tree_height(current_node->left);
	right_longii = binary_tree_height(current_node->right);

	return (left_longii - right_longii);
}
