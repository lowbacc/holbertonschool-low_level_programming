#include "main.h"

/**
 * _memset - Entry point
 * @s: memory area
 * @b: byte for @s
 * @n: number of bytes
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
