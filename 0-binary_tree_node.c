#include <stdlib.h>
#include "binary_trees.h"
/*
 * binary_tree_node: function that creates the node
 * @parent: the parent node pointer
 * @value: the value to be stored in the node to be created
 *
 * Return: point or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t stt = {value, parent, NULL, NULL};
binary_tree_t *point = malloc(sizeof(binary_tree_t));
if (point == NULL)
{
return NULL;
}
else
{
*point = stt;
return point;
}
}
