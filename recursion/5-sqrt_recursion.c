#include "main.h"

/**
* sqrt_helper - recursively finds the natural square root of n
* @n: the number to find the square root of
* @i: the current guess
*
* Return: the square root if found, -1 otherwise
*/
int sqrt_helper(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (sqrt_helper(n, 1));
}
/**
* _sqrt_recursion - returns the natural square root of n
* @n: the number
* Return: natural square root or -1 if not found
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_helper(n, 0));
}
