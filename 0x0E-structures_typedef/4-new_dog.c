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
dog_t *nd = malloc(sizeof(dog_t));
if (!nd)
{
return (NULL);    
}
else
{
nd->name = name;
nd->age = age;
nd->owner = owner;
return (nd);
}
}
