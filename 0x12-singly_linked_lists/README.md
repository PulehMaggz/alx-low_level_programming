# 0x12. Singly Linked Lists

This project focuses on implementing and manipulating singly linked lists in C. The goal is to understand the basic operations and functionalities of linked lists, adhering to specific coding standards and requirements.

## Project Requirements

- **Editors:** vi, vim, emacs
- **Compilation:** All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Code Style:** All code should follow the Betty coding style, checked using `betty-style.pl` and `betty-doc.pl`.
- **File Structure:**
  - All files should end with a new line.
  - No more than 5 functions per file.
  - No global variables.
  - The only allowed C standard library functions are `malloc`, `free`, and `exit`.
  - You are allowed to use `_putchar`.
  - Prototypes of all functions and `_putchar` should be included in a header file named `lists.h`.
  - Header files should be include guarded.

## Data Structure

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
