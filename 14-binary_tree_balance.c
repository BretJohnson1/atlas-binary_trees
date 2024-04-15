#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance of a tree
 *@tree: pointer to the root node
 *
 *Return: balance factor of tree or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	
	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}
