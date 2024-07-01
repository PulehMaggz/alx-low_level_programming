#include "main.h"

/**
*print_number - Prints an integer
*@n: The integer to print
*
*Description: Prints an integer using only _putchar
*/
void print_number(int n)
{
int digit;
int is_negative = 0;

if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
is_negative = 1;
n = -n;
}

/* Recursively print each digit */
if (n / 10 != 0)
print_number(n / 10);

/* Print the last digit */
digit = n % 10 + '0';
if (is_negative)
_putchar('-');
_putchar(digit);
}

