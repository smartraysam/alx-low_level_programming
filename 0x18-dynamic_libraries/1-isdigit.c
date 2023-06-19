#include "main.h"

/**
 * _isdigit - function to check if input character is a digit
 * @c: Parameter c as input
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}


