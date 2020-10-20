#include "dog.h"

/**
 * init_dog - initialize function for struct dog
 * @d: pointer to dog structure
 * @name: pointer to the dog´s name
 * @age: age of the dog
 * @owner: pointer to the dog´s owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
