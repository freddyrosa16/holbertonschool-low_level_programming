#include "main.h"
/**
 * *_strncpy - copies a string.
 * @dest: destination of the copy.
 * @src: The source of what I am copying.
 * @n: number of characters.
 * Return: return the value of dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int length;

	for (length = 0 ; length < n && src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}

	for ( ; length < n ; length++)
	{
		dest[length] = '\0';
	}

	return (dest);
}
