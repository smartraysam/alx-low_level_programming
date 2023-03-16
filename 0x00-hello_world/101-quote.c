#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - Entry poin
 * Description: prints string to standard error
 * Return: 1
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int len = strlen(s);
	write(2, s, len);
	return (1);
}
