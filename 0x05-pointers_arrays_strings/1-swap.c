#include "holberton.h"
/**
* swap_int - function that swaps the int values
*@a: first integer
*@b: second integer
*Description: swapper
*Return: nothing
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}

