#include <stdio.h>
#include "main.h"
/**
 * main - first function, prints the function
 * Return: return value 0
 */
void print_alphabet(void);

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	putchar(a);

	putchar('\n');
	return (0);
}
