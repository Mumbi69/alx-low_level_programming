#ifndef Mumbi_header
#define Mumbi_header

/**
* struct dog - dog info
* @name: name of dog
* @age: age of the dog
* @owner: name of the owner of the dog
*
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Additional prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
