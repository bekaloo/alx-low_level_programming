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
void more_numbers(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
putchar(i / 10 + 48);
}
if (i >= 0)
{
putchar((i % 10) + 48);
}
}
putchar('\n');
}

}

int main(){
    more_numbers();
    return 0;
}