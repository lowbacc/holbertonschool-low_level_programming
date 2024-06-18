#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * a random number is positive or negative
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	};

	if (n == 0)
	{
		printf("%d is 0\n", n);
	};

	if (n < 0)
	{
		printf("%d is negative\n", n);
	};

	return (0);
}
