#include "main.h"

/**
 * _strstr - Function searches a substring
 * @haystack: Parameter string to check
 * @needle: Parameter accept
 * Return: a pointer to the beginnning of the located substring
 * or Null if no such byte is found
 */
char  *_strstr(char *haystack, char *needle)
{
	int i,  j;

	while (haystack[i] != '\0')
	{
		while (haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
			return (&hystack[j]);
		i++;
	}
	return (NULL);
}

