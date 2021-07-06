#include <stdio.h>
/**
* print_diagsums - printing the sum of the diagonal elements of a matrix
* @a: Matrix
* @size: size of the matrix
*Description:
*Return: void
*/

void print_diagsums(int *a, int size)
{
int i, ltr = 0, rtl = 0, s = size * size;
for (i = 0; i < s; i += size + 1)
{
ltr += a[i];
}
for (i = size - 1; i <= s - size; i += size - 1)
{
rtl += a[i];
}
printf("%d, %d\n", ltr, rtl);
}
