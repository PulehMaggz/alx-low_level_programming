#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *s)
{
char *ptr = s;
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int i;
while (*s)
{
for (i = 0; alpha[i]; i++)
{
if (*s == alpha[i])
{
*s = rot13[i];
break;
}
}
s++;
}
return (ptr);
}
