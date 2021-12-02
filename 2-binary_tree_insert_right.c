#include <stdlib.h>
#include "binary_trees.h"
/*
 * binary_tree_insert_left: adds new left node
 * @parent: parent node to add the new right node to 
 * @value: the value of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *rightNodePoint = malloc(sizeof(binary_tree_t));
binary_tree_t *existingRightNode = parent->right;
binary_tree_t newNode = {value, parent, NULL, existingRightNode};
*rightNodePoint = newNode;
if(existingRightNode != NULL)
{
existingRightNode->parent = rightNodePoint;
}
parent->right = rightNodePoint;
return rightNodePoint;
}
