#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
return (helper_sqrt(n, 1));
}

/**
 * helper_sqrt - Helper function to recursively find the square root of a number.
 * @n: The number to find the square root of.
 * @i: The current value to check.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int helper_sqrt(int n, int i)
{
if (n < 0)
return (-1);
if (n == 0)
return (0);
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (helper_sqrt(n, i + 1));
}
