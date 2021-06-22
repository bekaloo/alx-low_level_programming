#include "holberton.h"
/**
* print_times_table - prints an nXn times table for
* @n: the size of the times table
*Description: n times table
* Return: Always 0 (Success)
*/
void print_times_table(int n) {
int i, j, p;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (p <= 9)
{
if (j == 0)
{
_putchar(p % 10 + 48);
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(p % 10 + 48);    
}
}
else if (p >= 10 && p < 100)
{
_putchar(' ');
_putchar(p / 10 + 48);
_putchar(p % 10 + 48);
}
else
{
_putchar(p / 100 + 48);
_putchar((p / 10) % 10 + 48);
_putchar(p % 10 + 48);
}
if (j < n)
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
