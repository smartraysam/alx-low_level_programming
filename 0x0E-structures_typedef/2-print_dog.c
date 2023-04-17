#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Function that print dog
 *
 * @d: dog struct
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d->owmer == NULL)
		{	
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
