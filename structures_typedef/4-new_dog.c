#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creating a new dog
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo
 * Return: to struct dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, size_name = 0, size_owner = 0;

	for (i = 0; name[i]; i++)
		;
	size_name = i + 1;
	for (i = 0; owner[i]; i++)
		;
	size_owner = i + 1;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(size_name * sizeof(char));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(size_owner * sizeof(char));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < size_name - 1; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';

	dog->age = age;

	for (i = 0; i < size_owner - 1; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
