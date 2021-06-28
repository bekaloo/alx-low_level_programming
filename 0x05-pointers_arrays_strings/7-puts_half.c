#include "holberton.h"
/**
* puts_half - prints half of the string
* @str: string
*Description:
*Return: nothing
*/
void puts_half(char *str)
{
int i = 0, j;
while (str[i])
{
i++;
}
if ((i - 1) % 2 == 0)
{
for (j = i / 2; j < i; j++)
{
_putchar(str[j]);
}
}
else
{
for (j = (i - 1) / 2; j < i; j++)
{
_putchar(str[j]);
}
}

_putchar('\n');
}
