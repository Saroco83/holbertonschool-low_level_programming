#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure for the doggy
 * @name: name of dog
 * @age: doggy old
 * @owner: name of human
 *
 * Description: This type definition is to use in the structs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
