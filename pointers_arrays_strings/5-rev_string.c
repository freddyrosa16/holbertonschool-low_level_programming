#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be reverses.
 */
void rev_string(char *s)
{
	char a;
	int i, len, len2;

	len = 0;
	len2 = 0;

	while (s[len])
		len++;

	len2 = len - 1;

	for (i = 0 ; i < len / 2 ; i++)
	{
		a = s[i];
		s[i] = s[len2];
		s[len2--] = a;
	}
}
