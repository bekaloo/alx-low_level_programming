#include <stdio.h>

void print_square(int size)
{
int i;
int j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
}

int main(){
    print_square(5);
    return 0;
}