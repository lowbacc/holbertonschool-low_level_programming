#include "main.h"

/**
 * _strcpy - Entry main
 * @dest: destination
 * @src: source
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
