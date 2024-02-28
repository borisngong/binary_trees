#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Responsible for checking if a node is a
 * leaf of a binary tree
 * @node: represents a pointer to the node to check
 * Return: 1 if node is leaf, 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
