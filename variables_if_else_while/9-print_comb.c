#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbs;

	for (numbs = 0; numbs < 10; numbs++)
	{
		putchar('0' + numbs);
		if (numbs < 9)
		{
			putchar(',');
			putchar(' ');
		};
	};

	putchar('\n');
	return (0);
}
