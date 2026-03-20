#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int lenght;

	lenght = 0;
	while (s[lenght] != '\0')
	lenght++;
	while (lenght > 0)
	{
		lenght--;
		_putchar(s[lenght]);
	}
	_putchar('\n');
}
