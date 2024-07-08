#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the beginning of the 2D square matrix (flattened as 1D array)
 * @size: Size of the square matrix
 *
 * Description: Assumes a is a 1D array representing a square matrix.
 * Prints the sum of the diagonals separated by a comma.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

/* Calculate sum of primary diagonal (top-left to bottom-right) */
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
}

/* Calculate sum of secondary diagonal (top-right to bottom-left)*/
for (i = 0; i < size; i++)
{
sum2 += *(a + i * size + (size - 1 - i));
}

/* Print the sums in the required format*/
printf("%d, %d\n", sum1, sum2);
}
