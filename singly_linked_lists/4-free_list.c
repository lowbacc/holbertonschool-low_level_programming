#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t
 * @head: Pointer
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = (*head).next;
		free((*head).str);
		free(head);
		head = next_node;
	}
}
