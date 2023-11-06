#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: size of array.
 * @c: storage char.
 * Return: pointer of an array of chars.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *char_array = (char *)malloc(size);
	if (char_array == 0)
		return (NULL);
	for (unsigned int i = 0 ; i < size; i++);
	{
		char_array[i] = c;
	}
	return (char_array);
}
