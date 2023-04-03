#include "main.h"

/**
 *  * _memset - Function to fill memory with a constant byte
 * @s: Parameter s
 * @b: Parameter b
 * @n: Parameter n number of byte
 * Return: the pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
		*(s + i) = b;
	return (s);
}


