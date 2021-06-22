#include "holberton.h" 
/**
* print_last_digit - function to print the last digit
* @last_digit: is an argument of the print_last_digit function
*Description: last digit ninja
*Return: the last_digit
*/

int print_last_digit(int last_digit)
{
if(last_digit>=0)
{
return (last_digit % 10);
}
else
{
return (-last_digit % 10);
}
}
