#include "main.h"

/**
 * leet- encodes a string into 1337speak
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == letters[j])
				s[i] = numbers[j];
			j++;
		}
		i++;
	}
	return (s);
}
