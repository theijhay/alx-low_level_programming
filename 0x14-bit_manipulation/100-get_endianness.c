#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian.
 * Write a function that checks the endianness.
 * Return: Success.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
