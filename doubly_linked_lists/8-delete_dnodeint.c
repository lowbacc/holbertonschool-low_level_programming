#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t
 * @head: Pointer
 * @index: Index
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;

	while (index && node)
	{
		node = (*node).next;
		index--;
	}

	if (node == NULL)
		return (-1);

	if (*head == node)
	{
		*head = (*node).next;
		if (*head)
			(*(*head)->prev).prev = NULL;
	}
	else
	{
		if ((*node).prev)
			(*(*node).prev).next = (*node).next;
		if ((*node).next)
			(*(*node).next).prev = (*node).prev;
	}

	free(node);
	return (1);
}
