#include "main.h"

/**
 * _strlen - Function that return length of a string
 * @s: parameter char s
 * Return: 1
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}
	return (length);
}
