#include "main.h"
/**
 * *_strncat - A function that works like _strcat,
 * it will use n bytes from src; and src does not not
 * nedd to be null.
 * @src: sources.
 * @dest: destination.
 * @n: number of bytes.
 * Return: return pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length = 0;

	while (dest[length] != '\0')
		length++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
