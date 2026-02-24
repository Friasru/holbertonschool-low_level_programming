#include "main.h"

/**
* main - write a function that fills with a constant byte
* @s: represents the memory you want to modify
* @b: is the value or "byte" you want to put in memory
* @n: is how many bytes you change
* _memset: fill the memory and write the same byte repeatedly
* Result: a function that fills memory with a constant file
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
