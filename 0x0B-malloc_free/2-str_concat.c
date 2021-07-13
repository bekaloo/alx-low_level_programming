#include "holberton.h"
#include <stdlib.h>
/**
* length - string dupilicator
* @str: string to be cloned
*Description:
*Return: a copy of the string
*/
int length(char *str)
{
if (str != NULL)
{
int j = 0;
while (str[j])
{
j++;
}
return (j);
}
else
{
return (0);
}
}
/**
* str_concat - string concatenator
* @s1: string to be cloned
* @s2: string to be cloned
*Description:
*Return: a concatenated version of two strings
*/
char *str_concat(char *s1, char *s2)
{
int j = 0, size = length(s1) + length(s2);
int size1 = length(s1);
char *s = (char *) malloc(size);
if (s != NULL)
{
while (j < size)
{
if (j < size1)
{
s[j] = s1[j];
}
else
{
s[j] = s2[j];
}
j++;
}
return (s);
}
else
{
return (NULL);
}
}
