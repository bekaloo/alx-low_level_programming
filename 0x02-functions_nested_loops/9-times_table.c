#include "holberton.h"
/**
* times_table - prints a times table
*Description: funciones les printes times tabules
*Return: void ... nothing ... nada
*/

void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
_putchar(i * j / 10 + 48);
_putchar(i * j % 10 + 48);
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
