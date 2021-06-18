#include <stdio.h>

/**
*main - printing alqhabets
*Description: prints alphabets
*Return: 0 if no error occured
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
