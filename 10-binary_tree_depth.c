#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a node in binary tree
 * @tree: node to measure the depth
 * Return: 0 or depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d;
	const binary_tree_t *node;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		node = tree;
		for (d = 0; node->parent != NULL; node = node->parent)
			d++;
	}
	return (d);
}
