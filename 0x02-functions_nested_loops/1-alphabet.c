#include<stdio.h>
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
for (int i = 97; i <= 122; i++)
{
putchar(i);
}
putchar(32);
}
