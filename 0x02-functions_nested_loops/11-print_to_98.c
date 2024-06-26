#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
/* Print numbers from n to 98, separated by commas and space */
while (1)
{
printf("%d", n);
if (n == 98)
break;
printf(", ");
if (n < 98)
n++;
else
n--;
}
printf("\n");
}
