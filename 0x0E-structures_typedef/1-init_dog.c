#include "dog.h"
#include <string.h>

/**
* struct dog - main function
* @d: ...
* @name: ...
* @age: ...
* @owner: ...
*
* Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		strcpy(d->name, name);
		d->age = age;
		strcpy(d->owner, owner);
}
