#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 on success
 */
int main(void)
{
char text[] = "_putchar";
int i;
for (i = 0; text[i] != '\0'; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
