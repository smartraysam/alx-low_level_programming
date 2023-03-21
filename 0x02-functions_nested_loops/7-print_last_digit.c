#include "main.h"

/**
 * print_last_digit - function that print the last digit of a number
 * @n:  a n parameter is required
 * Return: 0
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m *= -1;
	_putchar(m + '0');
	return (m);
}
