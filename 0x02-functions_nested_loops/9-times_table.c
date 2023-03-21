#include "main.h"

/**
 * times_table  - function that print 9 times table starting from 0
 * Return: 0
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int _mul = i * j;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (_mul < 10)
			{
				_putchar(' ');
				_putchar(_mul + '0');
			}
			else
			{
				_putchar((_mul / 10) + '0');
				_putchar((_mul % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
