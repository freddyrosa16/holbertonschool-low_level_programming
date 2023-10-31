#include "main.h"
/**
 * _puts_recursion - Functio that prints a string.
 * @s: String to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		s++;
	}
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_puts_recursion (s);
}
