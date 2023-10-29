#include "main.h"
/**
 * *_memset - A function that fills memory with a constant byte.
 * @s: memory space to be filled.
 * @b: bytes to be filled.
 * @n: number of spaces to be filled.
 * Return: return the value of s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
