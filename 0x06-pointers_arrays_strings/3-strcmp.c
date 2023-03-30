#include "main.h"

/**
 * _strcmp  - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: -ve difference s1 < s2
 * if s1 == s s2 , 0
 * if s1 > s2 +ve difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

