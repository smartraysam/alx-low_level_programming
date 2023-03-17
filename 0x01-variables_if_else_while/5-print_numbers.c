#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print all single digit of base 10 start from 0
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}
