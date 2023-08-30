#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Sees If a node is a leaf of a binary tree.
 * @node: Its the pointer to the node to check.
 *
 * Return: - 1 if node is leaf.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
