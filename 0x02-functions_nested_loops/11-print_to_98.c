#include<stdio.h>
/**
* print_to_98 - prints to the specified number
* @n: the argument that the func takes
*Description:
*Return:
*/
void print_to_98(int n)
{
int i,j;
if (n < 98)
{
for (j = 0; n + j <= 98; j++)
{
if (n + j != 98)
{
printf("%d, ", n + j);
}
else
{
printf("%d\n", n + j);
}
}
}
else if (n >= 98)
{
for (i = 0; n - i >= 98; i++)
{
if (n - i != 98)
{
printf("%d, ", n - i);
}
else
{
printf("%d\n", n - i);
}
}
}
}
