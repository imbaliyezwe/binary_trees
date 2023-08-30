#include "binary_trees.h"

/**
 * binary_tree_sibling - It Finds the sibling of the
 *                       node in a binary tree.
 * @node: The pointer to a node to find the sibling of.
 *
 * Return: NULL Is node is Null or nothing.
 *         Otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
