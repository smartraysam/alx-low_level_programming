#include "dog.h"
#include <stdlib.h>
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
			d->name = "(nil)";
		if (d->owmer == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

