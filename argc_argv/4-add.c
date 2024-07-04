#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of arg
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int somme = 0;

	for (i = 1; i < argc; i++)
	{
		 somme += *argv[i] - '0';
	}
	printf("%d\n", somme);
	return (somme);
}
