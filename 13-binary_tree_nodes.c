#include "binary_trees.h"
/**
 * binary_tree_nodes - Responsible for counting node's number in a tree
 * @tree: Represents pointer to the root node of the tree to count the nodes
 * Return: Node's count, 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;
	size_t tree_nodes = 0;

	if (tree)
	{
		tree_nodes += (tree->left || tree->right) ? 1 : 0;
		tree_nodes += binary_tree_nodes(tree->left);
		tree_nodes += binary_tree_nodes(tree->right);
	}
	return (tree_nodes);
}
