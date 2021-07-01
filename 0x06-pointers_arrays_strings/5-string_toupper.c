#include "holberton.h"
/**
* string_toupper - capitalizes all characters in a string
* @c: the string to be capitalized
*Description:
*Return: capitalized string
*/

char *string_toupper(char *c)
{
int i = 0;
while (c[i])
{
if (c[i] >= 97 && c[i] <= 122)
{
c[i] = 'A' + (c[i] - 97);
}
i++;
}
return (c);
}
