#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, l;

	l = 97;

	for (i = 0; i < 10; i++)
	{
		while (l <= 122)
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		l = 97;
	}
}
