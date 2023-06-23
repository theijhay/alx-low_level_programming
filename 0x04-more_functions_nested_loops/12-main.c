#include "main.h"


/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}
int negative = n < 0;
if (negative)
{
_putchar('-');
n = -n;
}
int digits[10];
int i = 0;
while (n > 0)
{
digits[i++] = n % 10;
n /= 10;
}
for (int j = i - 1; j >= 0; j--)
{
_putchar(digits[j] + '0');
}
}
