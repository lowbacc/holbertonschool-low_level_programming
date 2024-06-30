#include "main.h"

/**
 * _atoi - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !found_digit)
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}
	return (result * sign);
}
