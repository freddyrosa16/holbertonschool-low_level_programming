#include "main.h"
/**
 * puts_half - A function that prints half of a string.
 * @str: The varible in the string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != '\0')
	{
		length++;
	}
	n = (length - 1) / 2;
	for (i = n + 1 ; i < length ; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
