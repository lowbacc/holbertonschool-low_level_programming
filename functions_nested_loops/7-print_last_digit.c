#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: last digit
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int u;

	u = n % 10;
	if (u < 0)
		u *= -1;
	_putchar(u + '0');
	return (u);
}
