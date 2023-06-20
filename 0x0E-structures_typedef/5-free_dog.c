#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - this frees the memory space allocated
 * for a struct dog
 * @d: this represents the structdog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
