#include <stdlib.h>

typedef struct binary_tree_s binary_tree_t;

/**
 * binary_tree_node - Creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value to insert into the node
 *
 *Return: A pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    return (NULL):

      new_node->n = value;
  new_node->parent = parent;
  new_node->left = NULL;
  new_node->right = NULL;

  return (new_node);
}