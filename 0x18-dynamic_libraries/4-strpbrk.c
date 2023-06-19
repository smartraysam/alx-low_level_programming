#include "main.h"

/**
 * _strpbrk - Function searches a string fo any of a set of bytes
 * @s: Parameter string to check
 * @accept: Parameter accept
 * Return: number of bytes in s that matches one of the bytes in accept
 * or Null if no such byte is found
 */
char  *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (0);
}

