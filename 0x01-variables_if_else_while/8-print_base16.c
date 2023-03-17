#include <stdlib.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: print all number of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
		putchar(ch);
	for (ch = 97; ch < 103; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
