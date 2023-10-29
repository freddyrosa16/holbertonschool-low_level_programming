#include "main.h"
/**
 * _strcmp - A function that compares 2 strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: return value of strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

