#include "holberton.h"
/**
* print_most_numbers - prints numbers and a new line
*Description:
*Return:
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 49 || i != 50)
{
_putchar(i);
}
}
_putchar('\n');
}

