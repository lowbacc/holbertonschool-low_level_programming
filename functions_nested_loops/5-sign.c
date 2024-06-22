#include "main.h"

/**
 * print_sign - Entry point
 * @n: the number to check
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	_putchar(n > 0 ? 43 : (!n ? '0' : 45));
	return (n > 0 ? 1 : (!n ? 0 : -1));
}

