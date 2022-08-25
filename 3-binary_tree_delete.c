#include "binary_trees.h"


/**
 * binary_tree_delete -Function that deletes a entire binary tree
 *
 * @tree: Pointer to the root node of the binary tree to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
