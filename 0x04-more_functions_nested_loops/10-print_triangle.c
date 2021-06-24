#include "holberton.h"
#include <stdio.h>
/**
* print_triangle - prints a # right angle triangle
* @size: height and width of the triangle
*Description:
*Return: void
*/
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
