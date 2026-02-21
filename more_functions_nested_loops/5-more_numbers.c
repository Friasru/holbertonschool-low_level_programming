#include "main.h"

/**
* more_numbers - prints 0 to 14 ten times
*/
void more_numbers(void)
{
int i, n;

for (n = 0; n <= 14; n++)
{
for (n = 0; i < 10; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
}
_putchar((n % 10) + '0');
}
_putchar('\n');
}
}
