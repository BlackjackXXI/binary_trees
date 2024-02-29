#include "binary_trees.h"
/**
* binary_tree_preorder - cruises through a binary tree using pre-order vibes
* @tree: pointer to the OG root node
* @func: pointer to a lit print function
* Return: number of levels in the chill tree
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/*printf("%d\n",tree->n);*/
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
