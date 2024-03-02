#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node.
 *         If no common ancestor was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp;

	if (first == NULL || second == NULL)
		return (NULL);
	temp = (binary_tree_t *)second;
	while (first != NULL)
	{
		while (temp != NULL)
		{
			if (first == temp)
				return ((binary_tree_t *)first);
			second = temp->parent;
		}
		second = temp;
		first = first->parent;
	}
	return (NULL);
}
