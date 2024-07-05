#include "main.h"

/**
 * sqrt_recursive_helper - Entry point
 * @n: number
 * @i: the guess
 * Return: Always 0.
 */
int sqrt_recursive_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_recursive_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: number
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recursive_helper(n, 1));
}
