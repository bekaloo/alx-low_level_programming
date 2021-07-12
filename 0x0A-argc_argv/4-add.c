#include <stdio.h>
#include <stdlib.h>
/**
* nochar - main
* @s: command count/size of argv
*Description:
*Return: 0
*/

int nochar(char *s)
{
if (*s < 48 || *s > 57)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1);
}
}
else
{
s++;
return (nochar(s));
}
}
/**
* adder - main
* @c: command count/size of argv
* @cnt: array of commands
* @sum: command count/size of argv
* @limit: array of commands
*Description:
*Return: 0
*/
void adder(char *c[], int cnt, int *sum, int limit)
{
if (limit <= 1)
{
printf("0\n");
}
if (cnt < limit)
{
if (nochar(c[cnt]) == 0)
{
*sum += atoi(c[cnt]);
cnt++;
adder(c, cnt, sum, limit);
}
else
{
*sum = 0;
printf("Error\n");
}
}
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
int sum = 0, i = 1;
adder(argv, i, &sum, argc);
if (sum != 0)
{
printf("%d\n", sum);
}
return (0);
}
