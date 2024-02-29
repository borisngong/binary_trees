#include "binary_trees.h"
/**
 * binary_tree_sibling - Responsible for finding the sibling of a node.
 * @node: Represents a pointer to the node to find the sibling of.
 * Return: Represents a pointer to the sibling node, or NULL if node is NULL,
 * the parent is NULL, or node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
