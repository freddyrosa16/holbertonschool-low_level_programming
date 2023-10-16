#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  main - Principal function, prints the function depending on the number that is being generated. If a number is greater than 0 it will print os positive, else if the number is equal to 0 it will print is zero, else it will print is negative
 *  Return: returns value 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
