#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable
 * @d: pointer to struct dog
 * @name: name of doggo
 * @age: age of doggo
 * @owner: owner of doggo 
 * Return: void
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)

		(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
