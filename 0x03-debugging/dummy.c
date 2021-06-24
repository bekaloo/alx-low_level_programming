#include <stdio.h>


int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}


int main(){
    printf("%d\n",largest_number(10,10, 10));
    return (0);
}