#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t
 * @head: Pointer
 * @index: Index
 * Return: The node of a dlistint_t, or NULL if the node
 * doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index && head)
	{
		head = (*head).next;
		index--;
	}

	return (head);
}
