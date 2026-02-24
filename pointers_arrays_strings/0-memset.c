#include "main.h"

/**
* main - write a function that fills with a constant byte
*
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
