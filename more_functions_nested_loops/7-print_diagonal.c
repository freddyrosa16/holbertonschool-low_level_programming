#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - A function that draws a diagonal line o the terminal.
 * @n: The number of times the character is printed.
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (j = 0 ; j < n ; j++)
		{
			for (k = 0 ; k < n ; k++)
			{
				if (k == j)
					_putchar ('\\');
				else if (k < j)
					_putchar (' ');
			}
			_putchar ('\n');
		}
	}
}
