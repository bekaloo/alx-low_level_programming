#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers with a separator in between
* @separator: separates the numbers
* @n: number of numbers to be printed
*Description:
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int count = n;
va_list x;
va_start(x, n);
while (count)
{
printf("%d%c", *separator, va_arg(x, int));
count--;
}
}
