#include "main.h"

/**
* print_triangle - prints a triangle using the character '#'
* @size: the size of the triangle
*
* Description: prints a right-aligned triangle of size x size
* characters. Each line ends with a newline. If size is 0 or less,
*only a newline is printed.
*/
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; 1 <= size; i++)
{
for (j = 1; j <= i; j++)
_putchar('#');
_putchar('\n');
}
}
