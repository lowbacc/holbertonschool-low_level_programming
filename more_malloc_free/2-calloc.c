#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: number in the array
 * @size: size of elements
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p != NULL)
	{
		unsigned int i;
		char *ptr = p;

		for (i = 0; i < nmemb * size; i++)
			ptr[i] = 0;
	}
	return (p);
}
