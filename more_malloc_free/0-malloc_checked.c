#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: size of memory
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
