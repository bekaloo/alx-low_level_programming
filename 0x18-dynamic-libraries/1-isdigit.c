#include "main.h"
/**
* _isdigit - checks if digit
* @c: the argument
*Description: digit checker
*Return: 1 ifc is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
