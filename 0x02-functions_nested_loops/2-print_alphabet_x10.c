#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Return: Alwyas 0 (success)
 */
void print_alphabet(void)
{
	for (int i = 0; i < 10; i++)
	{
	for (char c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
