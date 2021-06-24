#include "holberton.h"
/**
* print_square - Square printing function
* @size: size of the square
*Description:
*Return: nothing
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
while (size--)
{
while (size--)
{
_putchar('#');
}
_putchar('\n');
}
}
}
