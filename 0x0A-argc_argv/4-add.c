#include <stdio.h>
#include <stdlib.h>
/**
* nochar - main
* @s: array of chars => string
*Description:
*Return: 0 if it has no letters || 1 if it has
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
* @c: array of strings
* @cnt: counter
* @sum: sum
* @limit: array size...argc
*Description:
*Return: nothing
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
