#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - main
*Description:
*Return: 0
*/
int main(int argc, char *argv[])
{
int c = 0;

if (argv[1] && argc == 2)
{
int x = atoi(argv[1]);
if (x >= 25)
{
c += x / 25;
x = x % 25;
}
if (x >= 10 && x < 25)
{
c += x / 10;
x = x % 10;
}
if (x >= 5 && x < 10)
{
c += x / 5;
x = x % 5;
}
if (x >= 2 && x < 5)
{
c += x / 2;
x = x % 2;
}
if (x == 1)
{
c += x;
}
}
else if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
printf("0\n");
return (0);
}
printf("%d\n", c);
return (0);
}
