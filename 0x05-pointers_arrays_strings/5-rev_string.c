#include "main.h"

/**
 * rev_string - Function  reverse string
 * @s: parameter char s
 * Return: 1
 */

void rev_string(char *s)
{
	int len, i, half;
	char temp;

	while (s[len] != '\0')
		i++;
	i = 0;
	half = len / 2;
	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
