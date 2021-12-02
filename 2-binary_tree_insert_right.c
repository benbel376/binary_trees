#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NodePoint;

	if (parent == NULL)
		return (NULL);

	NodePoint = binary_tree_node(parent, value);
	if (NodePoint == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		NodePoint->right = parent->right;
		parent->right->parent = NodePoint;
	}
	parent->right = NodePoint;

	return (NodePoint);
}
