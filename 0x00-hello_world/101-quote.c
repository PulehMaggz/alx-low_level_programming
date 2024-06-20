#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
    /* Write the message to the standard error */
write(STDERR_FILENO,
  "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

    /* Return 1 to indicate error */
return (1);
}
