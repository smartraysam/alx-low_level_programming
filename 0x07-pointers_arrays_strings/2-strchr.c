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
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	if (s[i] == c)
	return (s + i);

	return (NULL);
}

