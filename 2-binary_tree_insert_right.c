#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to parent
 * @value: value of node
 *
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(struct binary_tree_s));
	if (newnode == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;

	newnode->left = NULL;
	newnode->right = NULL;
	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		newnode->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);


}
