#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initialize a variable of type struct dog.
 *
 * @d: the struct dog pointer that will be used to save the new dog.
 *
 * @name: the string with the name of the dog.
 *
 * @age: the float that indicates the age of the dog.
 *
 * @owner: the string with the name of the dog's owner.
 *
 *Return: Nothing (void).
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;

	d->age = age;

	d->owner = owner;

}
