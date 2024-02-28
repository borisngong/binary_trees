#include "binary_trees.h"
/**
 * binary_tree_node - Responsible for creating a binary tree node
 * @parent: Reprents the pointer to parent of the node to create
 * @value: Represents value to put in the new node
 * Return: pointer to the new node or Null on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_tree_node = malloc(sizeof(binary_tree_t));

	if (new_b_tree_node == NULL)
	{
		return (NULL);
	}
	new_b_tree_node->n = value;
	new_b_tree_node->parent = parent;
	new_b_tree_node->left = NULL;
	new_b_tree_node->right = NULL;

	return (new_b_tree_node);
}
