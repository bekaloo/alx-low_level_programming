#include<stdio.h>

void print_number(int n)
{
int copy, nth, size = 1, ones = n % 10;

n /= 10;
copy = n;
if (ones < 0)
{
ones *= -1, copy *= -1, n *= -1;
putchar('-');
}
if (copy > 0)
{
while (copy / 10 != 0)
{
copy /= 10, size *= 10;
}
while (size > 0)
{
nth = n / size;
putchar('0' + nth);
n = n - (nth *size);
size /= 10;
}
}
putchar('0' + ones);
}

int main(){
    
    print_number(-6);
    
    return 0;
}

