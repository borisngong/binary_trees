#include "binary_trees.h"
/**
 * binary_tree_leaves - Responsible for cointing the leaves in a binary tree
 * @tree: Represents the ponter to the root node of tree to count leaves
 * Return: the number of leaves, 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;
	size_t tree_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	tree_leaves += binary_tree_leaves(current_node->left);
	tree_leaves += binary_tree_leaves(current_node->right);

	return (tree_leaves);
}
