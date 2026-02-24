#include "main.h"

/**
* _memset - fill memory
* @s: represents the memory you want to modify
* @b: is the value or "byte" you want to put in memory
* @n: is how many bytes you change
*
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
