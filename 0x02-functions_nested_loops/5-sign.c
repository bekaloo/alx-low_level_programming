#include "holberton.h"
/**
*print_sign - prints the sign of a given int
*@n: argument to be checked if negative or not
*Description:prints the sign of a given int
*Return: the -1 if -ve, 1 if +ve , 0 if 0
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar(45);
return (-1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(43);
return (1);
}

}

