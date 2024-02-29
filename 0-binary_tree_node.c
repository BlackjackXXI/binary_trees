#include "binary_trees.h"
/**
* binary_tree_node - makes a dope binary tree node
* @parent : pointer to the OG parent node
* @value : value for the fresh node, you feel?
* Return: pointer to the lit new node, or NULL if it's a flop
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
