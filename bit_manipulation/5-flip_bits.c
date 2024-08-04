#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * @n: First number
 * @m: Second number
 * Return: Number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}
