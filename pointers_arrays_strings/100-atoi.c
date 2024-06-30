#include "main.h"
#include <limits.h>

/**
 * _atoi - Entry point
 * @s: string
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;
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
			if (result > (UINT_MAX - (s[i] - '0')) / 10)
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}
	if (sign == -1 && result > INT_MAX)
	{
		return (INT_MIN);
	}
	return ((int)result * sign);
}
