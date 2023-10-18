#include "main.h"
/**
 * _isalpha - checks if lowercase or uppercase
 * Return: return value 0,1
 * @c: variables for uppercase, and lowercase
 */
int _isalpha(int c)
{
	int i;

	for (i = 65 ; i < 90 ; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 97 ; i < 122 ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

