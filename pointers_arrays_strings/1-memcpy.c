#include "main.h"

/**
* _memcpy - copy memory area
* @dest: is the destination
* @src: is the source
* @n: moves n bytes from src to dest
*
* Return: returns a pointer to destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
