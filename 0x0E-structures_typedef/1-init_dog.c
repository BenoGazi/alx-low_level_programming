#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - do initiation prototype
 * @d: param
 * @name: param
 * @age: param
 * @owner: param
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
