#include "main.h"

/**
 * print_rev - Function that print string in reverse
 * @s: parameter char s
 * Return: 1
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
