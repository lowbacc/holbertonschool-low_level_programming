#include <stdio.h>
#include "main.h"

/**
 * cap_string - check the code
 * @s: input
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i, j, nextLetterCap;

	nextLetterCap = 1;
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
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z') && (nextLetterCap == 1))
		{
			s[i] = s[i] - 32;
			nextLetterCap = 0;
		}
		else if ((s[i] >= 'A') && (s[i] <= 'Z') && (nextLetterCap == 1))
			nextLetterCap = 0;
		else if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n') || (s[i] == ','))
			nextLetterCap = 1;
		else if ((s[i] == '.') || (s[i] == '!') || (s[i] == '?') || (s[i] == '"'))
			nextLetterCap = 1;
		else if ((s[i] == '{') || (s[i] == '}') || (s[i] == ';') || (s[i] == ')'))
			nextLetterCap = 1;
		else if (s[i] == '(')
			nextLetterCap = 1;
		else
			nextLetterCap = 0;
	}
	return (s);
}
