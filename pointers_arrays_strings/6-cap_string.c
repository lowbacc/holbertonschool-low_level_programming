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

	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 9)
			s[j++] = s[i];
	}
	s[j] = '\0';

	for (i =  0 ; s[i] != '\0' ; i++)
		{
		if (s[i] >= 97 && s[i] <= 122)
			{
			if (s[i - 1] >= 65 && s[i - 1] <= 90)
				{
				continue;
				}
			else if (s[i - 1] >= 97 && s[i - 1] <= 122)
				{
				continue;
				}
			else if ((s[i - 1] >= 48 && s[i - 1] <= 57) || s[i - 1] == '-')
				{
				continue;
				}
			else
				{
				s[i] = s[i] - 32;
				}
			}
		}
		return (s);
}
