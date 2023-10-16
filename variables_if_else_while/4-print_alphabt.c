#include <stdio.h>
/**
 * main - pprincipal function, and prints the function
 * Return: return value 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{ putchar(ch); }
	if (ch != 'q' && ch != 'e')
	{
	putchar('\n');
	}
	return (0);
}
