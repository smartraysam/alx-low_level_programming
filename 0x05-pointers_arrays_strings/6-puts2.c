#include "main.h"

/**
 * puts2 - Function that print everty other character of a string
 * @str: parameter char str
 * Return: 1
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
