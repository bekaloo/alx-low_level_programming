#include <stdio.h>
// void print_diagonal(int n)
// {
// int i, j;
// if (n > 0)
// {
// for (i = 0; i < n; i++)
// {
// for (j = 0; j <= i; j++)
// {
// putchar(' ');
// if (j == i)
// {
// putchar('\\');
// }
// }
// putchar('\n');
// }
// }
// else
// {
// putchar('\n');
// }
// }
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
if (i != 50 && i != 52)
{
putchar(i);
}
}
putchar('\n');
    return 0;
}