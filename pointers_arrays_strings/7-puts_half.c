#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;
	int start;

	len = 0;
	while (str[len] != '\0')
		len++;

	start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
