#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two
 * diagonals of a square matrix of interger
 * @a: pointer
 * @size: number
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0; 
	while (i < size)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);
		i++;
	}
	printf("%i, %i\n", sum1, sum2);
}
