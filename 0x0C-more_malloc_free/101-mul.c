#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - checks if a string consists only of digits.
 * @s: the string to check.
 *
 * Return: 1 if the string consists only of digits, otherwise 0.
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * multiply - multiplies two positive numbers.
 * @num1: the first number as a string.
 * @num2: the second number as a string.
 */
void multiply(char *num1, char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int *result = calloc(len1 + len2, sizeof(int));
int i, j;
if (!result)
{
printf("Error\n");
exit(98);
}
for (i = len1 - 1; i >= 0; i--)
{
for (j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int sum = mul + result[i + j + 1];
result[i + j] += sum / 10;
result[i + j + 1] = sum % 10;
}
}
i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;
if (i == len1 + len2)
printf("0");
else
{
while (i < len1 + len2)
printf("%d", result[i++]);
}
printf("\n");
free(result);
}
/**
 * main - entry point for the program.
 * @argc: the number of arguments.
 * @argv: the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}
multiply(argv[1], argv[2]);
return (0);
}
