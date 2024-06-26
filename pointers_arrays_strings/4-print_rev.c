#include "main.h"

/**
 * print_rev - Entry point
 * @s: string print
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int len = 0, i;

	while (*(s + len) != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
