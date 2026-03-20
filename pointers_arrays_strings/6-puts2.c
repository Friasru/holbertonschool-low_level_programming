#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
