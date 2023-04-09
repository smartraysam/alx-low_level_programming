#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



/**
 * num_check - check string for number
 * @s: string to check
 * Return: bool
 */

int num_check(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - program to add positive numbers
 * @argc: argument counter
 * @argv: argument vecto
 *
 * Return: always 1
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc > 1)
	{
		for (; i < argc; i++)
		{
			if (num_check(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
