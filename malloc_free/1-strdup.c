#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space
* @str: the string to duplicate
*
* Return: Null if str is NULL
*/
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);

for (i = 0; i < length; i++)
duplicate[i] = str[i];
duplicate[length] = '\0';

return (duplicate);
}
