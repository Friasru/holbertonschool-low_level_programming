#include "main.h"
#include <string.h>

/**
* _strstr - locate a substring
* @haystack: string to search in
* @needle: substring to find
*
* Return: pointer to the beggining of the located substring, or NULL
*/
{
int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
j = 0;

while (needle[j] != '\0' && haystack[i + j] == needle[j])
{
j++;
}

if (needle[j] == '\0')
return (&haystack[i]);
}
return (NULL);
}
