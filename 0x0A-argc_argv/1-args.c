#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: argument counter
 * @argv: argument vecto
 *
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
