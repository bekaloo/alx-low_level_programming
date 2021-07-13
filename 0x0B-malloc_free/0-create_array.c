#include "holberton.h"
#include <stdlib.h>
/**
* create_array - array creator
* @size: size of the array
* @c: initial character
*Description:
*Return: string
*/
char *create_array(unsigned int size, char c)
{
int i = 0;
char *str = malloc(size * sizeof(char));
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
