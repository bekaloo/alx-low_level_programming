#include "dog.h"
#include <stdlib.h>
/**
* new_dog - dog god
*@name: name
*@age: age
*@owner: owner
*Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
if (name != NULL && owner != NULL)
{
dog_t *nd;
nd->name = name;
nd->age = age;
nd->owner = owner;
return (nd);
}
return (NULL);
}
