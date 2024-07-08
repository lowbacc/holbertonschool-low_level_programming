#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: string
 * @s2: other string
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len1 + i] = s2[i];
	s[len1 + len2] = '\0';

	return (s);
}
