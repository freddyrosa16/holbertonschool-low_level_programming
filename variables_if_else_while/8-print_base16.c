#include <stdio.h>
/**
 * main - first function, prints the function
 * Return: return value 0
 */
int main(void)
{
	int n;
	char l;

	for (n = 0 ; n < 10 ; n++)
	{putchar('0' + n); }
	for (l = 'a' ; l <= 'f' ; l++)
	{putchar(l); }
	putchar('\n');
	return (0);
}
