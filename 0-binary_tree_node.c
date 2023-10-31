#include "binary_trees.h"

/**
 * binary_tree_node - fuction name pointer to node
 * function that creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to be added
 *
 * Return: pointer to created node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(struct binary_tree_s));
	if (newnode == NULL)
		return (NULL);
	newnode->data = value;
	newnode->parent = parent;

	newnode->left = NULL;
	newnode->right = NULL;
	if (parent != NULL)
	{
		if (value < parent->data)
		{
			parent->left = newnode;
		}
		else
		{
			parent->right = newnode;
		}
	}
	return (newnode);
}
