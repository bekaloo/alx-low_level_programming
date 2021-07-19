#include "holberton.h"
#include "dog.h"

/**
* init_dog - dog
*@d: struct
*@name: name
*@age: age
*@owner: owner
*Description:
*Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
