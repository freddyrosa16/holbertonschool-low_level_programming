#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @size: size of the array
 * @array: print array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
