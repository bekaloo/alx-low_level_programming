#include "holberton.h"
/**
* print_rev - string reversing function
*@s: string to be reversed
*Description: string reversing function
*Return: void so nothing
*/
void print_rev(char *s)
{
int i = 0, j;
while (s[i])
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
