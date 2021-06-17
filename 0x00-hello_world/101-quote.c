#include<stdio.h>
#include<unistd.h>
/**
*main - Entry point
*
*Description: Printing to stderr without printf or puts
*Return: 0 if success
*/
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
