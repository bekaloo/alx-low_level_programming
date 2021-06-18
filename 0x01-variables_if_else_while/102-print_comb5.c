#include<stdio.h>
/**
* main - Print combinations of two digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
int tens;
int ones, ones1;

for (tens = 0; tens <= 9; tens++)
{
for (ones = 0; ones <= 9; ones++)
{
for (ones1 = ones + 1; ones1 <= 9; ones1++)
{
putchar(tens + '0');
putchar(ones + '0');
putchar(' ');
putchar(tens + '0');
putchar(ones1 + '0');
if (tens + '0' == '9' && ones1 + '0' == '9' && ones + '0' == '8')
{
}
else
{
putchar(',');
putchar(' ');
}

}

}

}

return (0);
}
