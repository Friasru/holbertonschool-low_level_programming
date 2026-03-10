#include "main.h"
#include <stdio.h>

/**\
 * print_name - write a function that prints a name
 * @name: printed name
 * @f: pointer to the function
 *
 * Return: a printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
