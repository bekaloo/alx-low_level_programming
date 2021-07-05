#include "holberton.h"
/**
*_strchr - finds a character in a string
*@s: the string we are searching in
*@c: the character we are looking for
*Description:
*Return: address of the first occurence of the character
*/

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return (0);
}
