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

	if (*head == NULL)
		return (-1);

	while (index && node)
	{
		if (node == NULL)
			return (-1);
		node = (*node).next;
		index--;
	}

	if (node == *head)
	{
		*head = (*node).next;
		if (*head != NULL)
			(*(*head)->prev).prev = NULL;
	}
	else
	{
		(*(*node).prev).next = (*node).next;
		if ((*node).next != NULL)
			(*(*node).next).prev = (*node).prev;
	}

	free(node);
	return (1);
}
