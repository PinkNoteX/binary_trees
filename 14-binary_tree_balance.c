#include "binary_trees.h"
/**
 * binary_tree_balance - measure the balance factor of binary tree
 * @tree: root node
 * Return: 0 or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_height - return height of binary tree
 * @tree: node of tree
 * Return: 1 or height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;
	if (tree == NULL)
		return (1);
	if (tree->left != NULL)
		l = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		r = 1 + binary_tree_height(tree->right);
	if (r > l)
		return (r);
	else
		return (l);
}
