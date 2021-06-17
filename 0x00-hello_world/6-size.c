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
printf("Size of a char%d byte(s)\n", charvar);
printf("Size of a int%d byte(s)\n", intvar);
printf("Size of a long%d byte(s)\n", longvar);
printf("Size of a long long%d byte(s)\n", llongvar);
printf("Size of a float%d byte(s)", floatvar);
return (0);
}
