#include "holberton.h"
#include "_putchar.c"
/**
*print_alphabet - prints small letter alphabet
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
