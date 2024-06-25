#include "main.h"

/**
 * print_triangle - Entry point
 * @size: size for the triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, k;

	size = 10;

	for (i = 1; i <= size; ++i)
	{
		for (j = 0; j < size - i; ++j)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; ++k)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
