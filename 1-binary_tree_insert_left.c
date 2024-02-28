#include "binary_trees.h"
/**
 * binary_tree_insert_left - Responsible for inserting a node as left-child
 * of another node
 * @parent: Represents pointer to the node to insert the insert left-child in
 * @value: Respresents the value to store the new node in
 * Return: Ponter to the created node, NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_tree_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_b_tree_node = binary_tree_node(parent, value);

	if (new_b_tree_node == NULL)
	{
		return (NULL);
	}
	/*if parent has left-child, new node takes it's place*/
	if (parent->left != NULL)
	{
		new_b_tree_node->left = parent->left;
		parent->left->parent = new_b_tree_node;
	}
	/*set new node as parent's left child*/
	parent->left = new_b_tree_node;

	return (new_b_tree_node);
}
