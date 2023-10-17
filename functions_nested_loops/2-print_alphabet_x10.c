#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times lowercase,
 * and a new line
 */
void print_alphabet_x10(void)
{
	int l;
	char n = 'a'

		for (l = 0 ; l < 10 ; l++)
		{
			for (n = 'a' ; n <= 'z' ; n++)
				_putchar(n);
			_putchar('\n');
		}
}

