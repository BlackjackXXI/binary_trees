#include "binary_trees.h"
/**
* binary_tree_delete - kicks out a node from the squad
* @tree : pointer to the OG root node
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
