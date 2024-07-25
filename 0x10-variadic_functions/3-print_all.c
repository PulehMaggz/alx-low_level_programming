#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j = 0;
char *str;
const char t_arg[] = "cifs";
char *sep = "";

va_start(args, format);
while (format && format[i])
{
while (t_arg[j])
{
if (format[i] == t_arg[j] && sep)
{
printf("%s", sep);
break;
}
j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s", str);
break;
}
sep = ", ";
i++;
j = 0;
}
va_end(args);
printf("\n");
}
