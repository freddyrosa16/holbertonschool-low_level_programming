#include "main.h"
#include <stdio.h>
/**
 * more_numbers - A function that prints the numbers from 0-14 10 times.
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			if (b >= 10)
			_putchar ((b / 10) + '0');
			_putchar ((b % 10) + '0');
		}
		_putchar ('\n');
	}
}
