#include "holberton.h"
/**
*_isalpha - checks if argument is alphabet
*@c: the ascii value of a character
*Description: alpha checker
*Return: 1 if alpha, 0 otherwise
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}


