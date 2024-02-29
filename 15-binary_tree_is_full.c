#include "binary_trees.h"

/**
 * binary_tree_is_full_recursive - Responsible for checking if binary tree is
 * full recursively
 * tree is full
 * @tree: A pointer to the current node in the tree
 * Return: 1 if the tree rooted at 'tree' is full, 0 otherwise
 */
int binary_tree_is_full_recursive(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;

	if (current_node != NULL)
	{
		if ((current_node->left != NULL && current_node->right == NULL) ||
			(current_node->left == NULL && current_node->right != NULL))
		{
			return (0);
		}

		if (binary_tree_is_full_recursive(current_node->left) == 0 ||
			binary_tree_is_full_recursive(current_node->right) == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
 * binary_tree_is_full - Responsible fot Checking if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 if the tree is NULL or is not full, 1 if the tree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;

	if (current_node == NULL)
		return (0);

	return (binary_tree_is_full_recursive(current_node));
}
