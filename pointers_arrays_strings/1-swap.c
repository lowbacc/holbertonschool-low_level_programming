#include "main.h"

/**
 * swap_int - Entry point
 * @a: first pointer
 * @b: second pointer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int swap_int = *a;

	*a = *b;
	*b = swap_int;
}
