#include "binary_trees.h"
/**
 * binary_trees_ancestor - Responsible for finding the lowest common ancestor
 * of two nodes.
 * @first: Represents a pointer to the first node.
 * @second: Represents pointer to the second node.
 * Return: A pointer to the lowest common ancestor node,
 * or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return NULL;

	const binary_tree_t *node1 = first;
	const binary_tree_t *node2 = second;

	while (node1 != node2)
	{
		node1 = (node1 == NULL) ? second : node1->parent;
		node2 = (node2 == NULL) ? first : node2->parent;
	}

	return (binary_tree_t *)node1;
}
