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
	int digit;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			if (found_digit)
			{
				break;
			}
			sign = -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			digit = s[i] - '0';
			result = result * 10 + digit;
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}
	result *= sign;
	return (result);
}
