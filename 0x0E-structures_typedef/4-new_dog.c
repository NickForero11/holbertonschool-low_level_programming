#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 *
 * @name: the string with the name of the dog.
 *
 * @age: the float that indicates the age of the dog.
 *
 * @owner: the string with the name of the dog's owner.
 *
 *Return: NULL if the function fails.
 *		  A pointer to the new dog otherwise.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		return (NULL);
	}

	_strcpy(d->name, name);

	d->age = age;

	_strcpy(d->owner, owner);

	return (d);

}

/**
 * _strcpy - Copies the string pointed to by src,
 *			 including the terminating null byte (\0),
 *			 to the buffer pointed to by dest.
 *
 * @dest: copie of the string
 *
 * @src: origin of the string
 *
 *Return: dest destine copie
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
