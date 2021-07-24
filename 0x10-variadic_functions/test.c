#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include "2-print_strings.c"

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
 
int main(void)
{
     float c = 5.0;
     const char *format = "%f";
     printf(format,c);
    return (0);
}