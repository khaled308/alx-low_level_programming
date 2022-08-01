#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: pointer
 */
void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
