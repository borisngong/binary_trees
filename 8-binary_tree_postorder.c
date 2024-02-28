#include "binary_trees.h"
/**
 * binary_tree_postorder - Responsible for visiting each node of the binary
 * tree using post-order
 * @tree: Represents a pointer to the root node of the tree to be traversed
 * @func: Represents pointer to the function to call when each
 * node is traversed
 * Description: Function traverses the binary tree using post-order traversal
 * calling the provided function for each node, passing the value in the node
 * as parameter to the function
 * Return: Always void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current_node = tree;

	if (current_node == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(current_node->left, func);
	binary_tree_postorder(current_node->right, func);
	func(current_node->n);
}
