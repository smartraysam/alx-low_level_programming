#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, l1, l2;

	l1 = 0;
	for (i = 0; name[i] != '\0'; i++)
		l1++;
	l2 = 0;
	for (i = 0; owner[i] != '\0'; i++)
		l2++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	char *name_cpy = malloc((l1 + 1) * sizeof(char));

	if (name_cpy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	char *owner_cpy = malloc((l2 + 1) * sizeof(char));

	if (owner_cpy == NULL)
	{
		free(new_dog);
		free(name_cpy);
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';
	new_dog->name = name;
	new_dog->age = age;

	for (i = 0; i < l2; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';
	new_dog->owner =  owner;
	return (new_dog);
}
