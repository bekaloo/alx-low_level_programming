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
for (l = sc - 1; l >= 0; l--)
{
if (s[l] == '-')
{
neg++;
}
else if (s[l] == '+')
{
}
else
{
break;
}
}
return (neg);
}
/**
* sign_changer - strlen alternative representation
* @neg: the number of - signs before the number
* @conv: integer that may need a sign change
*Description: str to int
*Return: integer if success, 0 if bad parameter
*/
void sign_changer(int neg, int conv)
{
if (neg % 2 != 0)
{
conv = -1 * conv;
}
}
/**
* _atoi - strlen alternative representation
* @s: the string about to be converted
*Description: str to int
*Return: integer if success, 0 if bad parameter
*/
int _atoi(char *s)
{
int i = 0, j, k, tmp, conv = 0, c = 0, sc = 0, neg = 0, int_end_index;
while (s[i])
{
if (s[i] >= 48 && s[i] <= 57)
{
if (sc > 0)
{
}
else
sc = i;
}
else
{
}
i++;
}
c = sc;
for (int_end_index = sc; int_end_index < i; int_end_index++)
{
if (s[int_end_index] >= 48 && s[int_end_index] <= 57)
{
}
else
break;
}
for (j = int_end_index - sc; j > 0; j--)
{
tmp = 1;
for (k = 0; k < j - 1; k++)
{
tmp *= 10;
}
conv += (s[c] - 48) * tmp;
c++;
}
neg = sign_counter(sc, s);
sign_changer(neg, conv);
return (conv);
}
