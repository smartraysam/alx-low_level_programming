#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n:  n bytes to copy
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (index = 0;  index < n; index++)
		dest[index] = src[index];
	return (dest);
}

