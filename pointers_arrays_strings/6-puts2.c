#include "main.h"
/**
 * puts2 - A function that prints the first character of a string.
 * @str: The character for the string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar (str[i]);
		}
		i++;
	}
	_putchar ('\n');
}
