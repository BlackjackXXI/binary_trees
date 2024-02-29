#include "binary_trees.h"
/**
* binary_tree_inorder - vibes through a binary tree using in-order exploration
* @tree: pointer to the OG root node
* @func: pointer to a dope print function
* Return: count of levels in the chill tree
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree  && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
