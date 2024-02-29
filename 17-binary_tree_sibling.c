#include "binary_trees.h"

/**
 * binary_tree_sibling - responsible for finding the sibling of a node
 * in a binary tree.
 * @node: Represents pointer to the node to find the sibling of
 * Return: A pointer to the sibling node, or NULL if node is NULL,
 * the parent is NULL, or node has no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (find_sibling(node->parent, node));
}

/**
 * find_sibling - Responsible for recursively finding the sibling of a node.
 * @parent: represents the parent node to search for the sibling.
 * @node: represents the node for which to find the sibling.
 * Return: A pointer to the sibling node, or NULL if not found.
 */
binary_tree_t *find_sibling(binary_tree_t *parent, binary_tree_t *node)
{
	binary_tree_t *sibling = 0;

	if (parent == NULL || parent->left == NULL || parent->right == NULL)
		return (NULL);

	if (parent->left == node)
		return (parent->right);
	else if (parent->right == node)
		return (parent->left);

	sibling = find_sibling(parent->left, node);
	if (sibling == NULL)
		sibling = find_sibling(parent->right, node);

	return (sibling);
}
