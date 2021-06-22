#include "holberton.h"
#include "_putchar.c"
void print_alphabet(void);
/**
*main - execution starts there
*Description: prints all small letter alphabets
*Return: zero ig successful
*/
int main(void)
{
print_alphabet();
return (0);
}
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
