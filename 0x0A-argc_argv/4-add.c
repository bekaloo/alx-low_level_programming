#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - main
* @argc: command count/size of argv
* @argv: array of commands
*Description:
*Return: 0
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argv[1])
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) != 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
