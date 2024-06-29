#include "main.h"

/**
 * rev_string - Entry point
 * @s: string reversed
 * Return: Alaways 0 (Success)
 */
void rev_string(char *s)
{
	int len = 0, i;
	char j;

	while (*(s + len) != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		j = *(s + i);
		*(s + i) = *(s + len - 1);
		*(s + len - 1) = j;
		len--;
	}
}
