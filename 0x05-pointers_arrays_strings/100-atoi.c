#include "holberton.h"
/**
* sign_counter - strlen alternative representation
* @s: the string about to be converted
* @sc: count
*Description: str to int
*Return: integer if success, 0 if bad parameter
*/
int sign_counter(int sc, char *s)
{
int l, neg = 0;
for (l = sc; l >= 0; l--)
{
if (s[l] == '-')
{
neg++;
}
}
return (neg);
}
/**
* _atoi - strlen alternative representation
* @s: the string about to be converted
*Description: str to int
*Return: integer if success, 0 if bad parameter
*/
int _atoi(char *s)
{
int i = 0, j, k, tmp, conv = 0, c = 0, sc = 0, neg = 0;
while (s[i])
{
if (s[i] >= 48 && s[i] <= 57)
{
if (sc > 0)
{

}
else
{
sc = i;
}
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
conv += (s[c] - 48) * tmp;
c++;
}
sign_counter(sc, s);
if (neg % 2 != 0)
{
conv = -conv;
}
return (conv);
}
