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
if (count > 1)
{
printf("%d%c", va_arg(x, int), *separator);
}
else
{
printf("%d\n", va_arg(x, int));
}
count--;
}
}
