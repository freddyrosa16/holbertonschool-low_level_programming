#include "main.h"
#include <stdio.h>
/**
 * print_numbers - A function to print_numbers from 0 to 9.
 * Return: return value 0.
 */
void print_numbers(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar ('0' + a);
	}
		_putchar ('\n');
}
