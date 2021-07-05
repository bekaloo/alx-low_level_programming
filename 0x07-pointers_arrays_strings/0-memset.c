#include "holberton.h"
/**
*_memset - sets a range of adresses to a value
*@s: string to copy to
*@b: value to be copied
*@n: number of elements to be set
*Description:
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (n > 0)
{
s[i] = b;
i++;
n--;
}
return (s);
}
