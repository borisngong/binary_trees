#include "binary_trees.h"
/**
 * binary_tree_depth - Responsible for measuring the depth of a node in a
 * binary tree
 * @tree: Represents the pointer to the node to measure the depth
 * Return: Depth of the node. 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;

	if (!current_node || !current_node->parent)
		return (0);

	return (1 + binary_tree_depth(current_node->parent));
}
