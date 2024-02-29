#include "binary_trees.h"
/**
* binary_tree_postorder - rolls through a binary tree using post-order swagger
* @tree: pointer to the OG root node
* @func: pointer to a lit print function
* Return: depth gauge of the chill tree
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree  && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
