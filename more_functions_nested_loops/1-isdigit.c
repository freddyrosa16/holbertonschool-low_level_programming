#include "main.h"
#include <stdio.h>
/**
 * _isdigit - A function that checks for a digit.
 * @c: variable for digit.
 * Return: return value 1 if is a digit, and 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
