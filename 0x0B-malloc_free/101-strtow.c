#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * word_check - check words in string
 * @s: the string
 * Return: no. of words
 */

int word_check(char *s)
{
	int i, flag, wc;

	flag = 0;
	wc = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			wc++;
		}
	}
	return (wc);
}


/**
 * strtow - split string
 * @str: string to split
 * Return: char
 */

char **strtow(char *str)
{
	char **s, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = word_check(str);
	if (words == 0)
		return (NULL);

	s = (char **) malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				s[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	s[k] = NULL;
	return (s);
}
