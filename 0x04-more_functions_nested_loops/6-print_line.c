#include "holberton.h"
/**
* print_line - prints a line by repeating underscores
* @n: the number of underscores
*Description: lint printer
*Return:
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (; n--;)
{
_putchar('_');
}
_putchar('\n');
}
}
