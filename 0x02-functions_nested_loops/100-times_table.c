#include "main.h"
#include <stdio.h>
/**
*print_times_table - n times table.
*@n: the number defines the table.
*Return: 0
*/
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
	{
		printf("%d ", i * j);
	}
		printf("\n");
	}
}
