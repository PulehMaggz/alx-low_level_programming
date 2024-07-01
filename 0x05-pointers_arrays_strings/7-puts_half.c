#include "main.h"

/**
* puts_half - Prints the second half of a string
* @str: Pointer to the string to print
*/
void puts_half(char *str)
{
int len = 0;
int i;
while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
i = len / 2;
else
i = (len - 1) / 2 + 1;
while (i < len)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
