#include <stdlib.h>
#include "binary_trees.h"
#include <stdbool.h>
/*
 *
 *
 *
 */

size_t counter(const binary_tree_t *tree, int count)
{
  int co = count;
  if(tree->left != NULL)
    {
      co = co + 1;
      counter(tree->left, co);
    }
  else if(tree->right != NULL)
    {
      co = co + 1;
      counter(tree->right, co);
    }
  return (co);
}
/*
 *
 *
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
  int count = counter(tree, 0);
  return(count);
}

