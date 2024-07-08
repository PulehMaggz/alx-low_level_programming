#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to be set
 * @to: Pointer to char to set
 *
 * Description: Sets the value of the pointer s to the address of the char to.
 */
void set_string(char **s, char *to)
{
*s = to;
}
