#include "binary_trees.h"
/**
 * binary_tree_size - measues the size of a binary tree
 * @tree: root node of the tree
 * Return: 0 or size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size++;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
