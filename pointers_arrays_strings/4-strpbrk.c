#include "main.h"

/**
* _strpbrk - search a string for any of a set of bytes
* @s: the string to examine
* @accept: string containing allowed characters
*
* Return: returns a pointer to the byte in s that matches one of the bytes
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{
j = 0;

while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return(&s[i]);
}
j++;
}
}
return (NULL);
}
