#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the struct dog to free
 *
 * Description: This function frees the memory allocated for the dog's
 * name, owner, and the dog structure itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

