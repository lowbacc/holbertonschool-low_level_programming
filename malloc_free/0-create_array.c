#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: size of array
 * @c: character
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *array = size ? malloc(size) : NULL;

	if (array)
	{
		while (size--)
			array[size] = c;
	}
	return (array);
}
