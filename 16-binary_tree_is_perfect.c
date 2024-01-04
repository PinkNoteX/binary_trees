#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, s, count = 0, balance = 1;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	s = binary_tree_size(tree);

	while (count <= h)
	{
		count++;
		balance *= 2;
	}
	if (balance - 1 == s)
		return (1);
	return (0);
}
/**
 * binary_tree_height - return height of binary tree
 * @tree: node of tree
 * Return: 0 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		r = 1 + binary_tree_height(tree->right);
	if (r > l)
		return (r);
	else
		return (l);
}
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
