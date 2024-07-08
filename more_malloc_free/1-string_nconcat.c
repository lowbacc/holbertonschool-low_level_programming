#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point
 * @s1: string
 * @s2: other string
 * @n: number of bytes
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 == NULL) ? 0 : 0;
	unsigned int len2 = (s2 == NULL) ? 0 : 0;
	char *nconcat;
	unsigned int i, j;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	nconcat = malloc(sizeof(char) * (len1 + n + 1));
	if (nconcat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		nconcat[i] = s1[i];
	for (j = 0; j < n; j++)
		nconcat[len1 + j] = s2[j];
	nconcat[len1 + n] = '\0';

	return (nconcat);
}
