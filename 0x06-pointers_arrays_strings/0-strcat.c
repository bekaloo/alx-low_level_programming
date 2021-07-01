#include "holberton.h"
/**
* _strcat - string concatenator
* @dest: destination
* @src: source
*Description:
*Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (src[i])
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
