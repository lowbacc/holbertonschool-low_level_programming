#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		write(1, c, 1);
		c++;
	};
	return (0);
}
