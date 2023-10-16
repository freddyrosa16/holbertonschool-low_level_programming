#include <stdio.h>
/**
 * main - Principal function, and prints the function
 * Return: return value 0
 */
int main(void)
{
	char ch;
	char chh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{ putchar(ch); }
	for (chh = 'A'; chh <= 'Z'; chh++)
	{ putchar(chh); }
	putchar('\n');
	return (0);
}
