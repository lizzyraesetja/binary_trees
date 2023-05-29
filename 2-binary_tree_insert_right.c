#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to add a binary tree node on the right
 * @parent: parent node to add new node to
 * @value: value of new node
 * Return: pointer to newly added node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);
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
	new->n = value;
	new->parent = parent;
	new->left = NULL;

	return (new);
}
