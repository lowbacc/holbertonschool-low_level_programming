#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index
 * @n: Number
 * @index: Index
 * Return: Value of the bit in index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
