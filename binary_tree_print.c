#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	// Print the current node value
	printf("(%03d) ", tree->n);

	// Print left and right children
	if (tree->left || tree->right)
	{
		if (tree->left)
			binary_tree_print(tree->left);
		else
			printf("(NULL) ");

		if (tree->right)
			binary_tree_print(tree->right);
		else
			printf("(NULL) ");
	}
}

