#include "holberton.h"
/**
*
*Description:
*Return:
*/

char *_strncat(char *dest, char *src, int n)
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
if (cntr < n)
{
cnctd[cntr] = src[scntr];
scntr++;
}
}
}
dest = cnctd;
return (dest);
}