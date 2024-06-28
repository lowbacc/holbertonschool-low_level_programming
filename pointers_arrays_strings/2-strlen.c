#include "main.h"

/**
 * _strlen - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
