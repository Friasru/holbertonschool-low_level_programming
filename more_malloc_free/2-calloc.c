#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return - pointer to the allocated memory set
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pointer;
char *p;
unsigned int total,  i;

if (nmemb == 0 || size == 0)
return (NULL);

total = nmemb * size;
pointer = malloc(total);

if (pointer == NULL)
return (NULL);

p = (char *)pointer;
for (i = 0; i < total; i++)
p[i] = 0;

return (pointer);
}
