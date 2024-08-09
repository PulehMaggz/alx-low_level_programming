#include "main.h"  /* Ensure this is at the top */

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);  /* Recursively call function with shifted number */

_putchar((n & 1) + '0');  /* Print the last bit of n */
}
