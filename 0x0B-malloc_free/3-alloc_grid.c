#include "holberton.h"
/**
* alloc_grid - allocates a multidimensional array
* @width: width of the matrix/array
* @height: height of the matrix/array
*Description:
*Return: a multidimensional array
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **arr = (int **) malloc(sizeof(int *) * height);
if (height <= 0 || width <= 0)
{
free (arr);
return (NULL);
}
else
{
if (arr != NULL)
{
for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
free (arr);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
else
{
free (arr);
return (NULL);
}
}
}
