#include <stdio.h>
#include <math.h>

/**
*main - Entry point
*
*Description: Finds and prints the largest prime factor of 612852475143.
*
*Return: Always 0 (Success)
*/
int main(void)
{
long n = 612852475143;
long largest_prime_factor = 0;
long i;

/* Check for number of 2s */
while (n % 2 == 0)
{
largest_prime_factor = 2;
n /= 2;
}

/* n must be odd at this point, so we can skip even numbers */
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_prime_factor = i;
n /= i;
}
}

/* This condition is to handle the case when n is a prime number greater than 2 */
if (n > 2)
largest_prime_factor = n;

printf("%ld\n", largest_prime_factor);

return (0);
}

