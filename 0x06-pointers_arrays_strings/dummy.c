#include<stdio.h>

void print_number(int n)
{
int dig = 1, i;
while (n / dig >= 1)
{
dig *= 10;
}
while (n > 0) {
putchar('0' + (n % dig));
dig /= 10;
}
}

int main(){
    
    print_number(6575);
    
    return 0;
}

