#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "4-new_dog.c"
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog(NULL, 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}