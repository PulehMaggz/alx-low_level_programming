# Singly Linked List Project

## Description

This project involves creating and manipulating a singly linked list in C. The primary objective is to understand and implement basic operations such as adding nodes, printing elements, and freeing memory in a singly linked list. The code adheres to the Betty style guidelines.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code must use the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- No use of global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`
- Allowed to use `_putchar`
- All function prototypes and the `_putchar` prototype should be included in `lists.h`
- All header files should be include guarded

## Data Structure

The project uses the following data structure for the singly linked list:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

