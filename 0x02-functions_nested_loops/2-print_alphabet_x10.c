#include "holberton.h"
#include "_putchar.c"
/**
*main - starting point of execution
*Description: executes the print_alphabet_x10 function
*Return: 0 if there are no errors
*/
int main(void)
{

print_alphabet_x10();
return (0);
}
/**
*print_alphabet_x10 - prints small letter alphabets 10 times
*/
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (int j = 97; j <= 122; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
