#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian.
 *  checks the endianness.
 *  Return: *c
 */

int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
