#include <stdio.h>
/**
 * main - pprincipal function, and prints the function
 * Return: return value 0
 */
int main(void)
{
	char ch, e, q;

	e = 'e';
	q = 'q';

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != q && ch != e)
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
