#include "holberton.h"
/**
* puts2 - printing string chars on different lines of
* @str: string
*Description:
*Return: nothing
*/
void puts2(char *str)
{
int i = 0, j;
while (str[i])
{
i++;
}
for (j = 0; j < i; j--)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
