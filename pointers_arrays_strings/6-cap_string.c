#include "main.h"

/**
 * cap_string - Entry point
 *
 * @s: character
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		if (s[i] == 9)
		{
			s[j] = ' ';
		}
		else
		{
			s[j] = s[i];
		}
	}
	s[j] = '\0';

	for (i =  0 ; s[i] != '\0' ; i++)
		{
		if (s[i] >= 97 && s[i] <= 122)
			{
			if (i == 0 || s[i - 1] == ' ')
				{
					s[i] -= 32;
				}
			}
		}
	return (s);
}
