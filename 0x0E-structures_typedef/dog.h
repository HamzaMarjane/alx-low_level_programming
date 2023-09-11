#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing information about a dog.
 * @name: Pointer to the dog's name.
 * @owner: Pointer to the owner's name.
 * @age: Age of the dog.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
