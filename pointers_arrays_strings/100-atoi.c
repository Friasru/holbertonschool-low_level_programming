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

	sign = 1;
	result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
			{
				result = result * 10 + digit;
				s++;
			}
			return (sign * result);
		}
		else
		{
			s++;
		}
	}
	return (0);
}
