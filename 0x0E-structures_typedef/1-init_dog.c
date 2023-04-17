#include "dog.h"
#include <stdlib.h>

/**
* init_dog - main function
* @d: ...
* @name: ...
* @age: ...
* @owner: ...
*
* Return: nothing
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
