#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char numbs = 97;

	while (numbs <= 122)
	{
		_putchar(numbs);
		numbs++;
	};
	_putchar('\n');
}
