#include<stdio.h>
/**
*main - starting point of execution
* Description: prints out the first 50 fibonacci numbers
* Return: returns 0 if all goes well
*/
int main(void)
{
long int i, fib = 1, prv = 0, tmp = 0;
for (i = 0; i < 50; i++)
{
prv = fib;
fib += tmp;
tmp = prv;
if (i == 49)
{
printf("%ld", fib);
}
else
{
printf("%ld, ", fib);
}
}
return (0);
}
