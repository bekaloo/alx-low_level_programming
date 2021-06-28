#include "holberton.h"
/**
* _strcpy - string copier...more like assigner
* @dest: target
* @src: source
*Description:
*Return: string
*/

char *_strcpy(char *dest, char *src)
{
int i = 0, j;
while (src[i])
{
i++;
}
for (j = 0; j <= i; j++)
{
if (j < i)
{
dest[j] = src[j];
}
else
{
dest[j] = '\0';
}
}
return (dest);
}
