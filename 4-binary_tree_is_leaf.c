#include "binary_trees.h"
/**
* binary_tree_is_leaf - peeps if a node is a leaf
* @node : pointer to the homie node
* Return: 1 if it's a chill leaf, 0 if it's not vibing solo
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
