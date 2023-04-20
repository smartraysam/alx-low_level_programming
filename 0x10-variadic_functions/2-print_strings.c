#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed
 * @n: number of strings
 *
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vs_print;

	va_start(vs_print, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vs_print, char *);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
	}

	va_end(vs_print);
	putchar('\n');
}
