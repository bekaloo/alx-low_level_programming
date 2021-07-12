#include "holberton.h"
#include <stdio.h>
/**
* main - main
* @argc: command count/size of argv
* @argv: array of commands
*Description:
*Return: 0
*/
int main(int argc, char *argv[])
{
if (argv[argc - 1])
{
printf("%d\n", argc - 1);
}
return (0);
}
