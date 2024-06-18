#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbs = 0;

	while (numbs <= 9)
	{
		putchar('0' + numbs);
		numbs++;
	};

	putchar('\n');
	return (0);
}
