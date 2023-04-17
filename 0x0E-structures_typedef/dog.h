#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * description: none
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/*
 * dog-t- typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name);
void free_dog(dog_t *d);

#endif