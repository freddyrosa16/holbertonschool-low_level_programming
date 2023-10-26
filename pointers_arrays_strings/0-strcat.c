#include "main.h"
/**
 * _strcat - This funcion appendes the src to the dest string,
 * overwriting the termination null byte at the end of dest,
 * and then adds a termination null byte.
 * @dest: original string.
 * @src: string to be added to dest.
 * Return: a pointer to the resulting string of dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[length] != '\0')
		length++;

	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length++;
		i++;
	}

	dest[length] = '\0';
	return (dest);
}
