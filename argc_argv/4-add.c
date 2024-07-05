#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arg
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int somme = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
