#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: pointer to newly all
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int lenght1, lenght2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

lenght1 = 0;
while (s1[lenght1])
lenght1++;

lenght2 = 0;
while (s2[lenght2])
lenght2++;

if (n >= lenght2)
n = lenght2;

result = malloc(lenght1 + n + 1);
if (result == NULL)
return (NULL);

for (i = 0; i < lenght1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++)
result[i + j] = s2[j];

result[i + j] = s2[j];

result[i + j] = '\0';

return (result);
}
