#include "main.h"
#include <stdio.h>

/**
 * main - print all argument pass
 * @argc: argument counter
 * @argv: argument vecto
 *
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	if (argc > 0)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
