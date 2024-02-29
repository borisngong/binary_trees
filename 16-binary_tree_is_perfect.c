#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Responsible for checking if a binary tree
 * is perfect.
 * @tree: Represents pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL or not perfect, otherwise 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leaf_depth = 0;

	if (tree == NULL)
		return (0);

	leaf_depth = binary_tree_depth(bt_get_leaf_helper(tree));
	return (bt_is_perfect_recursive_helper(tree, leaf_depth, 0));
}

/**
 * bt_is_leaf_helper - Responsible for checking if a node is a leaf of
 * a binary tree.
 * @node: Represents a pointer to the node to check
 * Return: 1 if the node is a leaf; otherwise 0
 */
unsigned char bt_is_leaf_helper(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * binary_tree_depth - Responsible for measuring the depth of a node
 * in a binary tree
 * @tree: Represnts a pointer to the node to measure the depth of
 *
 * Return: The depth of the node. 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *current_node = tree;

	if (!current_node || !current_node->parent)
		return (0);

	return (1 + binary_tree_depth(current_node->parent));
}

/**
 * bt_get_leaf_helper - Responsible for returning a leaf of a binary tree
 * @tree: Represents a pointer to the root node of the tree to find a leaf in
 * Return: pointer to the first encountered leaf
 */
const binary_tree_t *bt_get_leaf_helper(const binary_tree_t *tree)
{
	if (bt_is_leaf_helper(tree) == 1)
		return (tree);

	if (tree->left)
		return (bt_get_leaf_helper(tree->left));
	else
		return (bt_get_leaf_helper(tree->right));
}

/**
 * bt_is_perfect_recursive_helper - Responsible for recursively Checking if
 * a binary tree is perfect
 * @tree: Represents pointer to the root node of the tree to check.
 * @leaf_depth: Represnts the depth of one leaf in the binary tree.
 * @level: Represents the Level of the current node.
 * Return: 1 if tree is perfect; 0 therwise
 */
int bt_is_perfect_recursive_helper(const binary_tree_t *tree,
									size_t leaf_depth, size_t level)
{
	if (bt_is_leaf_helper(tree))
		return (level == leaf_depth ? 1 : 0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (bt_is_perfect_recursive_helper(tree->left, leaf_depth, level + 1) &&
			bt_is_perfect_recursive_helper(tree->right, leaf_depth, level + 1));
}
