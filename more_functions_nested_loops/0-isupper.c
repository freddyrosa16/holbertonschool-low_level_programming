#include "main.h"
#include <stdio.h>
/**
 * _isupper - A function that checks for uppercase characters.
 * Return: return value 1 when upper, and 0 for lower.
 * @c: variable for c.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
