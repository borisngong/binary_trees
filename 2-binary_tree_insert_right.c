#include "binary_trees.h"
/**
 * binary_tree_insert_right - Responsible for inserting a node as left-child
 * of another node
 * @parent: Represents pointer to the node to insert the left-child in
 * @value:  Respresents the value to store the new node in
 * Return: Ponter to the created node, NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	/* if parent has right-child, replace it with new node */
	if (parent->right != NULL)
	{
		new_b_tree_node->right = parent->right;
		parent->right->parent = new_b_tree_node;
	}
	/* Set new node as parent's right child */
	parent->right = new_b_tree_node;
	
	return (new_b_tree_node);
}
