#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins 
 * to make chnage for an amount of money
 * @argc: argument counter
 * @argv: argument vecto
 *
 * Return: always 1
 */

int main(int argc, char *argv[])
{
	int n = 0;
	int coins = 0;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		
		coins += n / 25;

		n = n % 25;
		coins += n / 10;

		n = n % 10;
		coins += n / 5;

		n = n % 5;
		coins += n / 2;

		n = n % 2;
		coins += n / 1;

		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
