#include "holberton.h"
/**
* length - string dupilicator
* @str: string to be cloned
*Description:
*Return: a copy of the string
*/
int length(char *str)
{
if (str != NULL)
{
int j = 0;
while (str[j])
{
j++;
}
return (j);
}
else
{
return (0);
}
}
/**
* freemem - frees a multidimensional array
* @arr: the matrix/array
* @height: height of the matrix/array
*Description:
*Return: nothing
*/
void freemem(char **arr, int height)
{
int j;
for (j = 0; j < height; j++)
{
free(arr[j]);
}
free(arr);
}
/**
* argstostr - string dupilicator
* @ac: string to be cloned
* @av: string to be cloned
*Description:
*Return: a copy of the string
*/
char *argstostr(int ac, char **av)
{
int len = 1, i, j, tl = 0;
char *str;
if (ac != 0 && av != NULL)
{
for (i = 0; i < ac; i++)
{
len += length(av[i]) + 1;
}
str = (char *) malloc(len);
if (str == NULL)
{
free(str);
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (j = 0; j < length(av[i]); j++)
{
str[tl] = av[i][j];
tl++;
}
str[tl] = '\n';
tl++;
}
return (str);
}
else
{
return (NULL);
}
}
