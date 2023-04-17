#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function that initilize dog struct
 *
 * @d: dog struct
 * @name: parameter b
 * @age: ago of dog
 * @owner : owner of the dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
