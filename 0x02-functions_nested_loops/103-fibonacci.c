#include<stdio.h>
/**
*main - starting point of execution
* Description: prints out the first 50 fibonacci numbers
* Return: returns 0 if all goes well
*/
int main(void)
{
long int i, fib = 1, prv = 0, tmp = 0, sum = 0;
for (i = 0; fib < 4000000; i++)
{
prv = fib;
fib += tmp;
tmp = prv;
if (fib % 2 == 0)
{
sum += fib;
}
}
printf("%ld\n", sum);
return (0);
}
