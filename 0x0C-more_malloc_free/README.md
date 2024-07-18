# Memory Allocation Project

This project involves writing a function that allocates memory using `malloc` and handles any allocation failure by terminating the process with a specific status value. The function follows the specified coding standards and requirements.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the folder is mandatory
- Code should use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, and `exit`
- Allowed to use `_putchar`
- Do not push `_putchar.c`
- Prototypes of all functions and `_putchar` should be included in the header file called `main.h`
- Do not push `main.c` files (they will not be taken into account)

## Function

### `malloc_checked`

Allocates memory using `malloc`. If the allocation fails, it terminates the process with a status value of 98.

**Prototype:**


