#include "holberton.h"
/**
* reverse_array - integer array reverser
* @a: the array to be reversed
* @n: the number of elements the array contains
*Description:
*Return:
*/

void reverse_array(int *a, int n)
{
int cnt, tmp, rcnt = n - 1;
for (cnt = 0; cnt < n / 2; cnt++)
{
tmp = a[cnt];
a[cnt] = a[rcnt];
a[rcnt] = tmp;
rcnt--;
}
}
