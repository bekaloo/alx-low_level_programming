#include "holberton.h"
/**
*print_diagonal - prints spades diagonally
*@n: how many lines
*Description:
*Return:
*/
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
_putchar(' ');
if (j == i)
{
_putchar('\\');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
