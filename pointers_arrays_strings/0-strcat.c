#include "main.h"

/**
 * _strcat - Entry point
 * @dest: destination string
 * @src: string
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while ((dest[i++] = src[j++]))
		;
	return (dest);
}
