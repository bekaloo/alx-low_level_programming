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
dest = src;
int i = 0;
while (src[i])
{
i++;
}
dest[i] = '\0';
return (dest);
}
