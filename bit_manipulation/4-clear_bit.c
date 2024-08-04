#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: Number
 * @index: Index
 * Return: 1 if work, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
