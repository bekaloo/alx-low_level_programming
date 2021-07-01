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
if (c[i + 1] > 96 && c[i + 1] < 123)
{
c[i + 1] = c[i + 1] - 32;
}
}
i++;
}
return (c);
}
