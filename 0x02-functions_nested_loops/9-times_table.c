#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int r1, c1, d;

	for (r1 = 0; r1 <= 9; r1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c1 = 1; c1 <= 9; c1++)
		{
			d = (r1 * c1);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c1 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
