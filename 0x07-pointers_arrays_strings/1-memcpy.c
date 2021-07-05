#include "holberton.h"
/**
*_memcpy - coppies n elements of the src to dest
*@dest: destination array
*@src: source array
*@n: number of characters
*Description:
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
