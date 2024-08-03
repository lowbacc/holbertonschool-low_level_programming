#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *next = (*head).next;
		free(head);
		head = next;
	}
}
