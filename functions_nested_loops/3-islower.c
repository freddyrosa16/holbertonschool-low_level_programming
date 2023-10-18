#include "main.h"
/**
 * _islower - Checks if its lowercase
 * Return: return value 0,1
 */
int _islower(int c)
{
	int i;

	for (i = 97 ; i < 122 ; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

