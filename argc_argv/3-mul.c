#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arg
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("argc: %d, num1: %d, num2:%d\n", argc, num1, num2);

	printf("%d\n", num1 * num2);
	return (0);
}
