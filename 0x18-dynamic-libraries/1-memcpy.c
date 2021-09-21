#include "main.h"
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
int i = 0;
while (n > 0)
{
dest[i] = src[i];
i++;
n--;
}
return (dest);
}
