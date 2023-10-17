#include <stdio.h>
/**
 * main - first function, prints the function
 * Return: return value 0
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{putchar('0' + n); }
	if (n < 10)
	{putchar(", "); }
	putchar('\n');
	return (0);
}
