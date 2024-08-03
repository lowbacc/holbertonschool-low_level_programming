#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t
 * @h: Pointer
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; h = (*h).next)
		count++;

	return (count);
}
