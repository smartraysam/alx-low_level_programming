#include "main.h"

/**
 * _strchr - Function that locate a character in a string
 * @s: Parameter string to check
 * @c: Parameter charecter we are looking for
 * Return: the pointer to the first occurence of charater
 * return Null if character isn't found
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

