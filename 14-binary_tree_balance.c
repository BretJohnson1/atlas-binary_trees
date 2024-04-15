#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 *@tree: pointer to the root node
 *
 *Return: the height of the tree, or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t height_left = 0, height_right = 0;

    if (!tree)
        return (0);

    if (tree->left)
        height_left = 1 + binary_tree_height(tree->left);

    if (tree->right)
        height_right = 1 + binary_tree_height(tree->right);

    if (height_left > height_right)
        return (height_left);
    else
        return (height_right);
}

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
