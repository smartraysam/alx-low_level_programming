#include "main.h"

/**
 * _islower  - function that print 10 times the alphabet in lowercase
 * @parameter: c 
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
