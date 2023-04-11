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
	char *s;
	int i, j, s1cnt, s2cnt = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1cnt] != '\0')
	{
		s1cnt++;
	}
	while (s2[s2cnt] != '\0')
	{
		s2cnt++;
	}
	s = malloc((s1cnt + s2cnt) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}
	return (s);
}
