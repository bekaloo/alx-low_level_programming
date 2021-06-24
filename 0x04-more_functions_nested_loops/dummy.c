#include <stdio.h>

void print_line(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
putchar('_');

}putchar('\n');
}
}

int main(){
    int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
putchar('\n');
    return 0;
}