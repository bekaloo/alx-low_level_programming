#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints a portion of the array
* @a: the array of integers
* @n: the number of array elements to print
*Description:
*Return: void
*/
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
