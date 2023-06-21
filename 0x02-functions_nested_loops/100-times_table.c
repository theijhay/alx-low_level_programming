#include "main.h"
#include <stdio.h>

/**
 * print_times_table - n times table.
 * @n: the number defines the table.
 * Return: Always 0.
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
	return;
	}
	for (int i = 0; i <= 15; i++)
	{
	printf("%d * %d = %d\n", n, i, n * i);
	}
}
