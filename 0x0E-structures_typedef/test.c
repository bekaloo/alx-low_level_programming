#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "1-init_dog.c"
#include "2-print_dog.c"
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    my_dog.age = 3.5;
    my_dog.owner = NULL;
    print_dog(&my_dog);
    return (0);
}