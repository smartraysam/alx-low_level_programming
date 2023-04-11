#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first  string
 * @s2: second string
 *
 * Return: char pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i))
	{
		len1++, i++;
	}
	while (*(s2 + j))
	{
		len2++, j++;
	}
	len2++;
	concat = malloc(sizeof(char) * (len1 + len2));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		*(concat + i) = *(s1 + i);
	}
	for (j = 0; j < len2; j++)
	{
		*(concat + i) = *(s2 + j);
		i++;
	}
	return (concat);
}
