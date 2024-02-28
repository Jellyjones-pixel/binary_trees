#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function which checks if a node is a leaf
 *
 *@node: is  pointer to the node to check.
 * Return: return 1 if node is a leaf, else  0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
/*
 *
 * John Mbithi
 *Jellyjones-pixel
 *johnmbitimutave@gmail.com
 */
