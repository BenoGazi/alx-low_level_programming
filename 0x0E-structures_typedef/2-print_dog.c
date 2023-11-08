#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function to print a struct dog
 * @d: parameter
 */

void print_dog(struct dog *d)
{
	if (!(d->name))
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->owner != NULL)
	{
		printf("Owner %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
