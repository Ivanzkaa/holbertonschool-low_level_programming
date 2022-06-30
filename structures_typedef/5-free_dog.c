#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - freeing the doggo
 * @d: struct dog
 * Return: void
 **/
void free_dog(dog_t *d)
{
	if (!d)
		return;
	if (d->owner)
		free(d->owner);
	if (d->name)
		free(d->name);
	free(d);
}
