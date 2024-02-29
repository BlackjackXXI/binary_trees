#include "binary_trees.h"
/**
* binary_tree_insert_right - hooks up a node as the right homie of another node
* @parent : pointer to the parent node of the node to create vibes with
* @value : value to drop in the fresh node
* Return: pointer to the lit new node, or NULL if it's a bummer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
