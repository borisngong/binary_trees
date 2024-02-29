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

	binary_tree_t *parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else if (parent->right == node)
		return (parent->left);
	else
		return (NULL);
}
