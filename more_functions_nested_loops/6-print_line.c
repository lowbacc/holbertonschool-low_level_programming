#include "main.h"

/**
 * print_line - Entry point
 * @n: time to print the character should be
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
