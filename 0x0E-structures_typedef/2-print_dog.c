#include "holberton.h"
#include "dog.h"
#include <stdio.h>
/**
*
*Description:
*Return:
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
char *n = d->name, *o = d->owner;
float a = d->age;
if (d->name == NULL)
{
n = "(nil)";
}

else if (d->owner == NULL)
{
o = "(nil)";
}
else if (d->age == 0)
{
printf("Name: %s\nAge: %s\nOwner: %s\n", n, "(nil)", o);
}
else
{
printf("Name: %s\nAge: %f\nOwner: %s\n", n, a, o);
}
}
}