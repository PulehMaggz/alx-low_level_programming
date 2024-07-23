#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The pointer to the struct dog to initialize
 * @name: The name to assign to the dog
 * @age: The age to assign to the dog
 * @owner: The owner to assign to the dog
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
