#include "main.h"

/**
 * _strncat - Entry point
 * @dest: destination string
 * @src: string
 * @n: number of bytes
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n && src[j])
		dest[i++] = src[j++];

	dest[i] = '\0';

	return (dest);
}
