#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node
 *@tree: pointer to the node to measure
 *
 *Return: depth of the node or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
