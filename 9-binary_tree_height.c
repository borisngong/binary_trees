#include "binary_trees.h"
/**
 * binary_tree_height - Resposible for measuring the height of the tree
 * @tree: Respresents a pointer to the root node of the tree
 * Return: Height of tree, O if tree is NUll
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_longii = 0;
	size_t right_longii = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
		left_longii = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_longii = 1 + binary_tree_height(tree->right);
	return ((left_longii > right_longii) ? left_longii : right_longii);
}
