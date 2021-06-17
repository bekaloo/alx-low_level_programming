#include<stdio.h>
/**
*main - prints sizes of variables
*
*Return: 0 if there are no errors
*/
int main(void)
{

char charvar;
int intvar;
long longvar;
long long llongvar;
float floatvar;
printf("Size of a char: %d byte(s)\n", sizeof(charvar));
printf("Size of a int: %d byte(s)\n", sizeof(intvar));
printf("Size of a long int: %d byte(s)\n", sizeof(longvar));
printf("Size of a long long int: %d byte(s)\n", sizeof(llongvar));
printf("Size of a float: %d byte(s)", sizeof(floatvar));
return (0);
}
