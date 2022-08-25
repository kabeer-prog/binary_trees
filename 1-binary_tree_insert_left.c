#include "binary_trees.h"


/**
 * binary_tree_insert_left -Function that inserts a node
 * as the left-child of another node
 *
 * @parent: Pointer to the root node of the tree
 * @value: Value of the node
 *
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (left_node != NULL)
	{
		if (parent->left != NULL)
		{
			left_node->left = parent->left;
			parent->left = left_node;
			left_node->left->parent = left_node;
		}
		else
			parent->left = left_node;

		return (left_node);
	}

	return (NULL);

}
