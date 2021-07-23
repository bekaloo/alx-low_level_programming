#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - prints numbers with a separator in between
* @separator: separates the numbers
* @n: number of numbers to be printed
*Return:
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int count = n;
va_list x;
va_start(x, n);
while (count)
{
char *temp = va_arg(x, char *);
if (temp != NULL)
{
if (count > 1)
{
printf("%s%s", temp, separator);
}
else
{
printf("%s\n", temp);
}
}
else
{
printf("(nil)\n");
break;
}
count--;
}
}
