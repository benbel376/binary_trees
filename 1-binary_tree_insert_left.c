#include <stdlib.h>
#include "binary_trees.h"
/*
 * binary_tree_insert_left: adds new left node
 * @parent: parent node to add the new left node to 
 * @value: the value of the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *leftNodePoint = malloc(sizeof(binary_tree_t));
binary_tree_t *existingLeftNode = parent->left;
binary_tree_t newNode = {value, parent, existingLeftNode, NULL};
*leftNodePoint = newNode;
if(existingLeftNode != NULL)
{
existingLeftNode->parent = leftNodePoint;
}
parent->left = leftNodePoint;
return leftNodePoint;
}
