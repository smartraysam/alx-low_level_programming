#include "main.h"

/**
 *  * _memcpy - Function that copies n bytes from memory src to memeru dest
 * @dest: Parameter dest
 * @src: Parameter src
 * @n: Parameter n number of byte
 * Return: the pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for ( ; n > 0; i++)
	{
		*(dest + i) = *(src + i);
		n--;
	}
	return (dest);
}


