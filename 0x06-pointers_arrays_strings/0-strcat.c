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
int i = 0, j = 0, scntr = 0, cntr;
while (src[i])
{
i++;
}
while (dest[j])
{
j++;
}
char cnctd[i + j];
for (cntr = 0; cntr < i + j; cntr++)
{
if (cntr < j)
{
cnctd[cntr] = dest[cntr];
}
else
{
cnctd[cntr] = src[scntr];
scntr++;
}
}
dest = cnctd;
return (dest);
}
