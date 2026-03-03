#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * 
 * Return: pointer to the new string, or NULL
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int lenght1, lenght2, i, j;

lenght1 = 0;
lenght2 = 0;

if (s1 != NULL)
lenght1 = strlen(s1);
if (s2 != NULL)
lenght2 = strlen(s2);

concat = malloc(sizeof(char) * (lenght1 + lenght2 + 1));

if (concat == NULL)
return (NULL);

i = 0;
j = 0;

while (i < lenght1)
{
concat[1] = s2[j];
i++;
j++;
}
while (j < lenght2)
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';

return(concat);
}
