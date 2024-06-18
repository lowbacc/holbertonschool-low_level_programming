#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int numbz = 0;

	while (numbz <= 9)
	{
		putchar('0' + numbz);
		numbz++;
	};

	putchar('\n');
	return (0);
}
