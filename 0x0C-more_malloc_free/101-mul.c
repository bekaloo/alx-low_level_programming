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
if (argv[1] && argv[2] && argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
return (1);
}

return (0);
}