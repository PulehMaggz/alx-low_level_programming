# Function Pointers Project

This project demonstrates the use of function pointers in C. It includes a function that prints a name using different formatting functions passed as pointers.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files are compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code adheres to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No use of global variables
- No more than 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, and `exit`
- Use of `_putchar` is allowed
- All header files are include guarded

## Files

- `function_pointers.h`: Header file containing function prototypes and include guards.
- `0-print_name.c`: Implementation of the `print_name` function.
- `0-main.c`: Example main file to test the `print_name` function.

## Functions

### print_name

Prototype:
```c
void print_name(char *name, void (*f)(char *));
