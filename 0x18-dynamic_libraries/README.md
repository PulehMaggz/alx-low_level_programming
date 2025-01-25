# Dynamic Libraries - 0x18. Dynamic Libraries

This project contains a dynamic library (`libdynamic.so`) with various utility functions implemented in C. The library is built with functions to handle common string, memory, and character operations. Additionally, a main program is provided to test the functionality of the dynamic library.

## Functions Implemented

The following functions are implemented in the dynamic library:

- `int _putchar(char c);`
- `int _islower(int c);`
- `int _isalpha(int c);`
- `int _abs(int n);`
- `int _isupper(int c);`
- `int _isdigit(int c);`
- `int _strlen(char *s);`
- `void _puts(char *s);`
- `char *_strcpy(char *dest, char *src);`
- `int _atoi(char *s);`
- `char *_strcat(char *dest, char *src);`
- `char *_strncat(char *dest, char *src, int n);`
- `char *_strncpy(char *dest, char *src, int n);`
- `int _strcmp(char *s1, char *s2);`
- `char *_memset(char *s, char b, unsigned int n);`
- `char *_memcpy(char *dest, char *src, unsigned int n);`
- `char *_strchr(char *s, char c);`
- `unsigned int _strspn(char *s, char *accept);`
- `char *_strpbrk(char *s, char *accept);`
- `char *_strstr(char *haystack, char *needle);`

## Compilation

To compile the dynamic library, run the following commands:

```bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
