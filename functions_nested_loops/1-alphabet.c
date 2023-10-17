#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
 * print_alphabet - prints the alphabet in lowercase, and a new line
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
