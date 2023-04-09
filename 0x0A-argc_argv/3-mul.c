#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiples two numbers
 * @argc: argument counter
 * @argv: argument vecto
 *
 * Return: always 1
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) *  atoi(argv[2]));
		return (0);
	}
	else
		printf("%s\n", "Error");
	return (1);
}
