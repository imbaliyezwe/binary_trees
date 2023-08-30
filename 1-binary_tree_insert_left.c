#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts the  node as the left-child of
 *                           of another in the binary tree.
 * @parent: This is the pointer of the node to insert the left-child in.
 * @value: This is the value to store the new node.
 *
 * Return: NULL- If Parent is NULL or If theres an error.
 *         OR/ Otherwise - a pointer to the new node.
 *
 * Description: If parent has a left-child already, then the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
