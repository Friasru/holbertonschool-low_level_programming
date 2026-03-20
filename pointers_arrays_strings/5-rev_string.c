#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to a string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int lenght;
	int i;
	char temp;

	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;

	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - 1 - i] = temp;
	}
}
