#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: destination
 * @src: source
 * @n: number
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
