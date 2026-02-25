#include "main.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string
* @s: pointer to the string
* @c: character to search for
*
* Return: pointer to first occurrence of c, or NULL if not found
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (1)
{
if(s[i] == c)
return &s[i];

if(s[i] == '\0')
break;

i++;
}
return (NULL);
}
