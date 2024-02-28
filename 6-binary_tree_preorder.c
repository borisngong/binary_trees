#include "binary_trees.h"
/**
 * binary_tree_preorder - Responsible for visiting each node of the binary
 * tree using pre-order traversal
 * @func: Represents pointer to the function to call for each node
 * @tree: represents a pointer to the root node of the binary tree to
 * traverse
 * Description: function trasverses the tree using pre-order transversal,
 * calls the provided function for each node and passing the value in the
 * node as parameter to the function
 *
 * Return: Always void
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current_node = tree;

	if (current_node == NULL || func == NULL)
	{
		return;
	}
	func(current_node->n);
	binary_tree_preorder(current_node->left, func);
	binary_tree_preorder(current_node->right, func);
}
