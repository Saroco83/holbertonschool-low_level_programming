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

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
