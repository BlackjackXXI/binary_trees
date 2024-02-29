#include "binary_trees.h"
/**
* binary_tree_insert_left - hooks up a node as the left homie of another node
* @parent : pointer to the parent node of the node to create vibes with
* @value : value to drop in the fresh node
* Return: pointer to the chill new node, or NULL if it's a bummer
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
