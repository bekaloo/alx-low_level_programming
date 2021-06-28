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
for (j = i - 1; j >= 0; j--)
{
_putchar(str[j]);
_putchar('\n');
}
}
