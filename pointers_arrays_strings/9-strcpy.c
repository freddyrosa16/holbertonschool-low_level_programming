#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - A function that copies the string pointed by src.
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to becopied
 * Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

