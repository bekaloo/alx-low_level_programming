#include<stdio.h>
/**
*main - starting point of execution
* Description: prints out the first 50 fibonacci numbers
* Return: returns 0 if all goes well
*/
int main(void)
{
long long i, fib = 1, prv = 0, tmp = 0;
for (i = 0; i < 50; i++)
{
prv = fib;
fib += tmp;
tmp = prv;
printf("%d, ", fib);
}
return (0);
}
