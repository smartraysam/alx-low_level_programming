#include "main.h"

/**
 * print_times_table  - function that print n times table starting from 0
 * @n: Inout parameter for the function
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j, _mul;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 0; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			_mul = i * j;
			if (_mul < 100)
				_putchar(' ');
			if (_mul < 10)
				_putchar(' ');
			if (_mul >= 100)
			{
				_putchar((_mul / 100) + '0');
				_putchar(((_mul / 10) % 10) + '0');
			}
			else if (_mul < 100 && _mul > 9)
			{
				_putchar((_mul / 10) + '0');
			}
			_putchar((_mul % 10) + '0');
		}
		_putchar('\n');
	}
}
