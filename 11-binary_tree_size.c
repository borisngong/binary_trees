#include "binary_trees.h"
/**
 * binary_tree_size - Responsible for calculating the size of a tree
 * @tree: Represents a pointer to the root of a node of the tree to
 * measure the size
 * Return: Size of the tree, 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree != NULL)
	{
		tree_size += 1;
		tree_size += binary_tree_size(tree->left);
		tree_size += binary_tree_size(tree->right);
	}
	return (tree_size);
}
