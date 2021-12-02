#include <stdlib.h>
#include "binary_trees.h"
/*
 *
 *
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
  if(tree)
    {
      if(tree->left)
	{
	  binary_tree_inorder(tree->left, func);
	}
      func(tree->n);
      if(tree->right)
	{
	  binary_tree_inorder(tree->right, func);
	}
    }
}
