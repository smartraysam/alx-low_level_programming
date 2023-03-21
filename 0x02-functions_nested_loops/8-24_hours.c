#include "main.h"

/**
 * jack_bauer  - function that print every minute of the day of jack bauer
 * Return: 0
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
