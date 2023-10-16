#include <stdio.h>
/**
 * main - first function, and prints the function
 * Return: return value 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n <= 10 ; n++)
	{
		putchar ('0' + n);
	}
	putchar('\n');
	return (0);
}
