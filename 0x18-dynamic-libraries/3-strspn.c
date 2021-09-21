#include "main.h"
/**
* _strspn - search and count character occurunces
*@s: string to search chars from
*@accept: set of characters to be searched for
*Description:
*Return: character count
*/

unsigned int _strspn(char *s, char *accept)
{
int slen = 0, alen = 0;
int j;
int k;
unsigned int mc = 0;
while (s[slen])
{
slen++;
}
while (accept[alen])
{
alen++;
}
for (j = 0; j < slen / 2; j++)
{
for (k = 0; k < alen; k++)
{
if (s[j] == accept[k])
{
mc++;
}
}
}
return (mc);
}
