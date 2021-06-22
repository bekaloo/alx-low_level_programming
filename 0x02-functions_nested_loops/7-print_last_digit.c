#include "holberton.h"
/**
* print_last_digit - function to print the last digit
* @last_digit: is an argument of the print_last_digit function
*Description: last digit ninja
*Return: the last_digit
*/

int print_last_digit(int last_digit)
{
int l;
l = (last_digit * last_digit) / last_digit;
l = l % 10;
_putchar(l + 48);
return (l);
}
