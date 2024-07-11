#include "main.h"

/**
 * check_prime - Helper function to recursively check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check divisibility.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
    if (n <= 1)  // Numbers less than or equal to 1 are not prime
        return (0);
    return (check_prime(n, 2));  // Start checking divisibility from 2
}

/**
 * check_prime - Helper function to recursively check if a number is prime.
 * @n: The number to check.
 * @i: The current divisor to check divisibility.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
    if (i >= n)  // Base case: if we've checked up to n, n is prime
        return (1);
    if (n % i == 0)  // If n is divisible by i, it's not prime
        return (0);
    return (check_prime(n, i + 1));  // Check the next divisor
}
