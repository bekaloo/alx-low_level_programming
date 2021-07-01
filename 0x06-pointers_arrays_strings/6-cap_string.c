#include "holberton.h"
/**
* cap_string - capitalizes words
* @c: the string to be
*Description:
*Return: capitalized version of the parameter string
*/
char *cap_string(char *c)
{
int i = 0;

while (c[i])
{
if (c[i] >= 97 && c[i] <= 122)
{
c[i] = 'A' + (c[i + 1] - 97);
}
switch (c[i])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
if (c[i + 1] >= 97 && c[i + 1] <= 122)
{
c[i + 1] = 'A' + (c[i + 1] - 97);
}
}
i++;
}
return (c);
}
