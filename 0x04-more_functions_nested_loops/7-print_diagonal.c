#include "holberton.h"
/**
*print_diagonal - prints backward slashes diagonally
*@n: how long the line is
*Description: Diagonal line printer
*Return: nothing
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
if (j == i)
{
_putchar(92);
}
else
{
_putchar(' ');
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
