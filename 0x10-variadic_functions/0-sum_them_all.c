#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
*
*Description:
*Return:
*/
int sum_them_all(const unsigned int n, ...)
{
if (n > 0)
{
 va_list ap;
  int i, sum;

  va_start (ap, n);         /* Initialize the argument list. */

  sum = 0;
  for (i = 0; i < n; i++)
    sum += va_arg (ap, int);    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return sum;
}
else
{
return (0);
}
}