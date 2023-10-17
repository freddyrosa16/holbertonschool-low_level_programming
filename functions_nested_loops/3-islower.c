#include "main.h"
/**
 * _isalpha - Checks if its lowercase
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

