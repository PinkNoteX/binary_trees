#include "binary_trees.h"
/**
 * binary_tree_insert_right - create binary tree at right
 * @parent: parent node
 * @value: value to set
 * Return: new binary tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->right = NULL;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
	}


	return (new);
}
