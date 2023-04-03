#include "main.h"

/**
 * _strstr - Function searches a substring
 * @haystack: Parameter string to check
 * @needle: Parameter accept
 * Return: a pointer to the beginnning of the located substring
 * or Null if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;


	while (needle[b] != '\0')
		b++;
	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

