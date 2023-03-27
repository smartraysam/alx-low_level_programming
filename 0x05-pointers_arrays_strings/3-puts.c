#include "main.h"

/**
 * _puts - Function that print string
 * @str: parameter char str
 * Return: 1
 */

void _puts(char *str)
{
	int l = 0;

	while (str[l])
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
