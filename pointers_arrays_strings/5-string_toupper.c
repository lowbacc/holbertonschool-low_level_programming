#include "main.h"

/**
 * string_toupper - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p >= 97 && *p <= 122)
		{
			*p -= 32;
		}
		p++;
	}
	return (s);
}
