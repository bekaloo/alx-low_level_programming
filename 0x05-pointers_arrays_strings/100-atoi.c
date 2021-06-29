#include "holberton.h"
/**
* _atoi - strlen alternative representation
* @s: the string about to be converted
*Description: str to int
*Return: integer if success, 0 if bad parameter
*/
int _atoi(char *s)
{
int i = 0, j, k, tmp, conv = 0, c = 0;
while (s[i])
{
if (s[i] >= 48 && s[i] <= 57)
{
continue;
}
else
{
return (0);
break;
}
i++;
}
for (j = i; j > 0; j--)
{
tmp = 1;
for (k = 0; k < j - 1; k++)
{
tmp *= 10;
}
conv +=  (s[c] - 48) * tmp;
c++;
}
return (conv);
}
