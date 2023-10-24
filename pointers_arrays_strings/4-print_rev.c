#include "main.h"
/**
 * print_rev - A function that prints a string in reverse.
 * @s: string to be printed.
 */
void print_rev(char *s)
{
	while (*s)
	{
	s++;
	}
	s--;
	while (*s)
	{
	_putchar (*s);
	s--;
	}
	_putchar ('\n');
}
