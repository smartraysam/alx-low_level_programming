#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @n:  a n parameter is required
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = -(n);
		return (n);
	}
}
