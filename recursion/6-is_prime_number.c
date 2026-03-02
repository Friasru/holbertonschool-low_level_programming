#include "main.h"

/**
* is_prime_helper - recursively checks if n is divisible by i
* @n: number to check
* @i: current divisor
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_helper(int n, int i)
{
if (n <= 1)
return (0);
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_helper(n, i + 1));
}

int is_prime_number(int n)
{
return (is_prime_helper(n, 2));
}
