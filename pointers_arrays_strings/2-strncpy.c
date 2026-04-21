#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string to copy
 * @n: maximum number of bytes
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
