#include "main.h"

/**
 * check_prime_number - Entry point
 * @n: number
 * @i: divisor
 * Return: Always 0.
 */
int check_prime_number(int n, int i)
{
	return ((n <= 1) ? 0 :
	       (i == n) ? 1 :
	       (n % i == 0) ? 0 :
	       check_prime_number(n, i + 1));
}

/**
 * is_prime_number - Entry point
 * @n: number
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
