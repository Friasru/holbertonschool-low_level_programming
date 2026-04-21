#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int is_sep;

	while (str[i] != '\0')
	{
		is_sep = 0;

		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
			{
				is_sep = 1;
			}

			if (is_sep && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			i++;
	}
	return (str);
}
