#include "main.h"
#include <stdio.h>

/**
 * leet - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
	char *letters = "aeotlAEOTL";
	char *leet = "4307143071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet[j];
				break;
			}
		}
	}
	return (s);
}

