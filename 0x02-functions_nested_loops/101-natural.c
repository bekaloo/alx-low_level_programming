#include<stdio.h>
/**
* main - startin point of execution
* Description: adds numbers divisible by 5 and 3
* Return: Always 0 (Success)
*/
int main(void)
{
int i, a = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
a += i;
}
}
printf("%d\n", a);
return (0);
}
