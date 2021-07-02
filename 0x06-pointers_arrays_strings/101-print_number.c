#include "holberton.h"
/**
*
*Description:
*Return:
*/
//
void print_number(int n)
{
int dig = 1, i;
while (n / dig > 1)
{
dig *= 10;
}
while (n > 0) {
_putchar((n % dig) / dig);
dig /= 10;
}
}