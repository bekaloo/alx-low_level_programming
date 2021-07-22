#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - adder
* @n: number of variables
*Description:
*Return: sum or 0
*/
int sum_them_all(const unsigned int n, ...)
{
if (n > 0)
{
va_list ap;
unsigned int i, sum;
va_start(ap, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);

}
va_end(ap);
return (sum);
}
else
{
return (0);
}
}
