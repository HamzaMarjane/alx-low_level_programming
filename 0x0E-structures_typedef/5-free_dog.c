#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory allocated for a dog (dog_t) structure.
 * @d: Pointer to the dog structure (dog_t) to be freed.
 **/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
