#include "main.h"
#include <string.h>

/**
* _strspn - gets the lenght of a prefix substring
* @s: the string to examine
* @accept: string containing allowed characters
*
* Return: number of bytes at the start of s
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0;
{
int found = 0;

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found)
count++;
else
break;
}
return (count);
}
