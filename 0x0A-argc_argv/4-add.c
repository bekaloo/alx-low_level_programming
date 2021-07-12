#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* nochar - main
* @s: string
*Description:
*Return: 0
*/
int nochar(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < 48 || s[i] > 57)
{
return (1);
}
i++;
}
return (0);
}
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
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (nochar(argv[i]) == 0)
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
