#include "main.h"
/**
 * _print_rev_recursion - Afunctions that prints the string in reverse.
 * @s: String to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion (s + 1);
		_putchar (*s);
	}
}


