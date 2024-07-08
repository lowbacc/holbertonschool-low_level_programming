#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *s;
	int len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	while (len >= 0)
	{
		s[len] = str[len];
		len--;
	}
	return (s);
}
