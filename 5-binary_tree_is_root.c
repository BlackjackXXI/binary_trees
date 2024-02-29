#include "binary_trees.h"
/**
* binary_tree_is_root - peeps if a node is the big boss, you know?
* @node : pointer to the homie node
* Return: 1 if it's the root, 0 if it's just rolling with the squad
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
