#include "main.h"

/**
 * puts_half - Entry point
 * @str: string
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = ((i + 1) / 2);
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
