#include "holberton.h"
/**
*_islower - Return false if letter is small and true if not
*@c: is ascii value of a letter
*Description: small letter checker
*Return: 1 if small, 0 if not
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
