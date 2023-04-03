#include "main.h"

/**
 * _strspn - Function that get the length of a prefix substring
 * @s: Parameter string to check
 * @accept: Parameter accept
 * Return: number of bytes in the initial segments
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				if (n == i)
					n++;
			}
		}
	}
	return (n);
}

