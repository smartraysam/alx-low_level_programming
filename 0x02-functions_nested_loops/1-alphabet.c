#include "main.h"

/**
 * print_alphabet - function that print the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
