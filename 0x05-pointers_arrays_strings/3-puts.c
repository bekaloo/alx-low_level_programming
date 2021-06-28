#include "holberton.h"
/**
* _puts - holbertons puts
* @str: string that gets passed to the _puts function
*Description: prints a char
*Return:
*/
void _puts(char *str)
{
int i = 0, j;
while (str[i])
{
i++;
}
for (j = 0; j < i; j++)
{
_putchar(str[j]);
}
}

