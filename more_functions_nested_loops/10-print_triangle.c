#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: the size of the triangle
 *
 * Return: triangle with the given size
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - 1; j++)
			_putchar(' ');
		for (j = 0; j < 1; j++)
			_putchar('#');
		_putchar('\n');
	}
}
