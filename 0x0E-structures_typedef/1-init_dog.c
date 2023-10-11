#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - It initializes a variable of type struc dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = (struct dog *)malloc(sizeof(struct dog));
		if (d == NULL)
		{
			return;
		}
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
