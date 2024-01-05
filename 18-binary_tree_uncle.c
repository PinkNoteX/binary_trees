#include "binary_trees.h"
/**
 * binary_tree_uncle - return uncle to node
 * @node: node ot return uncle of
 * Return: NULL or uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - return sibling to node
 * @node: node to return sibling of
 * Return: null or sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
