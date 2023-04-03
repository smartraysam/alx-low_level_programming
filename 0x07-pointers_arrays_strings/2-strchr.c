#include "main.h"

/**
 *  * _strchr - Function that locate a character in a string
 * @s: Parameter s
 * @c: Parameter c
 * Return: the pointer s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

