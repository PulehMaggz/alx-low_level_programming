#ifndef MAIN_H
#define MAIN_H

/**
 * reset_to_98 - Updates the value of an integer pointed to by n to 98.
 * @n: Pointer to the integer to be updated
 */

void reset_to_98(int *n);
int _putchar(char c);

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
#endif /* MAIN_H */