#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 1 ; j <= 9 ; j++)
		{
			k = i * j;
			if (k > 9)
			{
				l = k % 10;
				m = (k - l) / 10;
				_putchar (44);
				_putchar (32);
				_putchar (m + '0');
				_putchar (u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar (44);
					_putchar (32);
					_putchar (32);
				}
				_puchar (k + '0');
			}
		}
		_putchar ('\n');
	}
}
