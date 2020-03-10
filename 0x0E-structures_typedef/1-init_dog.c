#include "dog.h"
/**
 * init_dog - function to initialize
 * @d: pointer to struct
 * @name: pointer to name
 * @age: variable of integer
 * @owner: pointer to owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
