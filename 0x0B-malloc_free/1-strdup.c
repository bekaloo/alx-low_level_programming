#include "holberton.h"
#include <stdlib.h>
/**
* _strdup - string dupilicator
* @str: string to be cloned
*Description:
*Return: a copy of the string
*/
char *_strdup(char *str)
{
int i = 0, j = 0;
while (str[i])
{
i++;
}
char *s = (char *) malloc(i);
while (str[j])
{
s[j] = str[j];
j++;
}
return (s);
}
