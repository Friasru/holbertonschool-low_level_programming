#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - write a function that prints a name
 * @name: the name to print
 * @f: pointer to the function that prints the name
 *
 * Return: a printed name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
