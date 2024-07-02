#include "main.h"

/**
 * _strchr - Entry point
 * @s: pointer
 * @c: character
 * Return: ALways 0.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
