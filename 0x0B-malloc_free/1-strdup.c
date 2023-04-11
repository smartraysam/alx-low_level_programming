#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that return a pointer to a newly
 * allocated space in memory, which contains a copy of
 * string given as a parameter
 * @str: string to copy
 *
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i, cnt;

	if (str == NULL)
	{
		return (NULL);
	}
	cnt = 0;
	while (str[cnt] != '\0')
	{
		cnt++;
	}
	s = malloc(cnt * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
