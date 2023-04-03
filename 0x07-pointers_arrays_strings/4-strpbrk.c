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
	int i, j, n, k = 0;

	for (i = 0; s[i]; i++)
	{
		if (k == 0)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					k = 1;
					i--;
					break;
				}
			}
		}
		else
			return (&s[i]);
	}
	return (0);
}

