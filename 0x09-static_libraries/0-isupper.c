#include "holberton.h"
/**
* _isupper - the function that checks if the char is capital letter
*@c: the parameter of the _isupper function
*Description:
*Return: 1 if letter is capital, 0 otherwise
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
