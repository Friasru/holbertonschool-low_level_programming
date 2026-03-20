#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to a string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int lenght;

	lenght = 0;
	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
