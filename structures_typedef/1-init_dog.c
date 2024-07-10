#include "dog.h"
#include <stddef.h>
/**
 * init_dog
 * @d: pointer
 * @name: name for the dog
 * @age: age for the dog
 * @owner: the owner of the dog
 * Return: ALways 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
