#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer
 * @idx: Index
 * @n: Data for the new node
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1 && current)
	{
		current = (*current).next;
		idx--;
	}

	if (current == NULL)
		return (NULL);

	if ((*current).next == NULL && idx == 0)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).prev = current;
	(*new_node).next = (*current).next;
	if ((*current).next)
		(*(*current).next).prev = new_node;
	(*current).next = new_node;

	return (new_node);
}
