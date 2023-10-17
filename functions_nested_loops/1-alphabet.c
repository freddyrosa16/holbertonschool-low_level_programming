#include <stdio.h>
#include "main.h"
/**
 * main - first function, prints the function
 * print_alphabet - prints the alphabet in lowercase, and a new line
 */
void print_alphabet(void);

int main(void)
{
	char l;

	for (l = 'a' ; l <= 'z' ; l++)
		_putchar(l);
	_putchar('\n');
}
