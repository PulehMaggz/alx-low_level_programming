# 0x14. C - Bit Manipulation

## Description
This project focuses on bit manipulation in C programming. It includes tasks that involve converting binary numbers to unsigned integers, setting bits, clearing bits, toggling bits, and more.

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do it won't be taken into account
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file

## Tasks
### 0. Binary to Unsigned Int
Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of 0 and 1 chars
- Return: the converted number, or 0 if
  - there is one or more chars in the string `b` that is not 0 or 1
  - `b` is `NULL`

### 1. Print binary
Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use `malloc`
- You are not allowed to use the `%` or `/` operators

### 2. Get Bit
Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from 0 of the bit you want to get
- Returns: the value of the bit at index `index` or `-1` if an error occured

### 3. Set Bit
Write a function that sets the value of a bit to 1 at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred (if the index is out of range)

### 4. Clear Bit
Write a function that sets the value of a bit to 0 at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from 0 of the bit you want to clear
- Returns: 1 if it worked, or -1 if an error occurred (if the index is out of range)

### 5. Flip Bit
Write a function that flips the value of a bit to the opposite value at a given index.

- Prototype: `int flip_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from 0 of the bit you want to flip
- Returns: the new value of the bit

### 6. Endianness
Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: 0 if big endian, 1 if little endian

### 7. Crackme3
Find the password for this [program](https://github.com/holbertonschool/0x13.c).

- Save the password in the `101-password` file

## Author
- [Your Name]

## License
This project is licensed under the [MIT License](LICENSE).
