#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - Structure that represents the basic dog characteristics.
 * @name: String of the dog's name.
 * @age: float of the dog's age.
 * @owner: String of the dog's owners name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
#endif
