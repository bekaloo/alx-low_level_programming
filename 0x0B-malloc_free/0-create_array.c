#include "holberton.h"
#include <stdlib.h>
/**
* create_array
* @size: size of the array
* @c: initial character
*Description:
*Return:
*/
char *create_array(unsigned int size, char c)
{
char *str = (void*) malloc(size);
str[0] = c;
return (str);
}
