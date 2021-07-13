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
int size1 = length(s1), size2 = length(s2), j2;
char *s = (char *) malloc(size + 1);
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
j2 = 0;
while (j2 < size2)
{
s[j] = s2[j2];
j2++;
j++;
}
break;
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
