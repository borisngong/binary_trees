#include "binary_trees.h"
/**
 * binary_tree_inorder - Responsible for visiting each node of the binary
 * tree using in-order traversal
 * @tree: represents pointer to the root node of the binary tree
 * @func: represent pointer to the function to call when each
 * node is traversed
 * Description: The function func traversal the binary tree through
 * inorder traversal and call the provided function for each node,
 * passing the value in the node as a parameter of the function
 * Return: always void
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *current_node = tree;
	if (current_node == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(current_node->left, func);
	func(tree->n);
	binary_tree_inorder(current_node->right, func);
}
