#include "holberton.h"
/**
* print_chessboard - prints a chess board
* @a: the array that contains the board toys
*Description:
*Return: nothing
*/

void print_chessboard(char (*a)[8])
{
int i;
while (a[i])
{
_putchar('a[i]');
if (i % 8 == 0)
{
_putchar('\n');
}
}
}
