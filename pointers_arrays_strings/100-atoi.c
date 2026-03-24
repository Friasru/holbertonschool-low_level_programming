#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: The converted integer, or 0 if no number is found
 */
int _atoi(char *s)
{
	int sign;
	int result;
	int digit;
	int started;

	sign = 1;
	result = 0;
	digit = 0;
	started = 0;

	while (*s)
	{
		if (*s == '-' && started == 0)
		{
			sign *= -1;
		}
		else if (*s == '+' && started == 0)
		{
		}
		else if (*s >= '0' && *s <= '9')
			{
				started = 1;
				digit = *s - '0';
				result = result * 10 + digit;
			}
		else if (started == 1)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
