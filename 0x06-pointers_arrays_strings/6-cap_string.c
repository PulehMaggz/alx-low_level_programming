#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
int capitalize = 1; /* Capitalize next character */

while (*s != '\0')
{
if (*s == ' ' || *s == '\t' || *s == '\n' ||
*s == ',' || *s == ';' || *s == '.' ||
*s == '!' || *s == '?' || *s == '"' ||
*s == '(' || *s == ')' || *s == '{' ||
*s == '}')
{
capitalize = 1;
}
else if ((*s >= 'a' && *s <= 'z') && capitalize)
{
*s -= 32;
capitalize = 0;
}
else
{
capitalize = 0;
}
s++;
}
return (s);
}
