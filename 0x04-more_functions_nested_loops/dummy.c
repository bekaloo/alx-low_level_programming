#include <stdio.h>

void print_triangle(int size)
{
int i, j, k;
for (i = 0; i < size; i++)
{
for (j = 1; j < size - i; j++)
{
printf(" ");
}
for (k = 0; k <= i; k++)
{
printf("#");
}
printf("\n");
}
}


int main(){
    print_triangle(5);
    return 0;
}