#include "holberton.h"
/**
* _strlen - strlen alternative representation
* @s: the char array or string
*Description: strlen alt
*Return: the length of the string
*/

int _strlen(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}
