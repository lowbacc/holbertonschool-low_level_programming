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
	int cap = 1;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
	}

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

	for (i =  1; s[i] != '\0' ; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (cap)
			{
				s[i] -= 32;
				cap = 0;
			}
			else if (s[i - 1] != '.')
			{
				cap = 0;
			}
		}
		else if (s[i] == '.')
		{
			cap = 1;
		}
		else if (s[i] == ' ' || s[i] == '.')
		{
			cap = 1;
		}
	}
	return (s);
}
