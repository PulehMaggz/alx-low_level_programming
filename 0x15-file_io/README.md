# Read Text File

This project contains a function to read a text file and print it to the standard output.

## Files

- `main.h`: Header file with function prototypes.
- `read_textfile.c`: Implementation of the `read_textfile` function.
- `README.md`: This file.

## Function

### `ssize_t read_textfile(const char *filename, size_t letters)`

- **Parameters**:
  - `filename`: The name of the file to read.
  - `letters`: The number of letters to read and print.

- **Returns**:
  - The actual number of letters read and printed, or `0` on failure.

## Compilation

Compile the project using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 read_textfile.c -o read_textfile
