#include "main.h"

/**
* sqrt_helper - finds the natural square root of a number
* @n: number to evaluate
* @i: number to test
*
* Return: natural square root of n, or -1 if none
*/
static int sqrt_helper(int n, int i)
{
if (i * i > n)
{
return (-1);
}

if (i * i == n)
{
return (i);
}

return (sqrt_helper(n, i + 1));
}
