#include "main.h"
/**
 * print_sign - prints the sign
 * Return: return value (+,1), (0,0), and (-,1)
 * @n: variable to see if >0, =0, or <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	if (n < 0)
	{
		_putchar (45);
		return (-1);
	}
	else
	{
		_putchar (48);
		return (0);
	}
}
