#include "main.h"

/**
 * _puts - Entry point
 * @str: pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		length++;
		str++;
	}
	_putchar('\n');
}
