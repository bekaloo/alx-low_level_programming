#include "holberton.h"
/**
* rev_string - string reverser
* @s: strubg to be reversed
*Description:
*Return: void
*/
void rev_string(char *s)
{
int i = 0, j, k = 0;
while (s[i])
{
i++;
}
char tmp[i];
for (j = i - 1; j >= 0; j--)
{
s[j] = tmp[k];
k++;
}
*s = tmp;
}
