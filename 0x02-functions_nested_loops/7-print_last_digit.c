#include "holberton.h"
#include "_putchar.c"
#include<stdio.h>
/**
* print_last_digit - function to print the last digit
* @n: is an argument of the print_last_digit function
*Description: last digit ninja
*Return: the last_digit
*/

int print_last_digit(int n)
{
int l;

l = n % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
int main(){
    print_last_digit(-1024);return 0;
}