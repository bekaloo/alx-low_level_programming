#include "holberton.h"
#include <stdlib.h>
/**
* freemem - frees a multidimensional array
* @arr: the matrix/array
* @height: height of the matrix/array
*Description:
*Return: nothing
*/
void freemem(int **arr, int height)
{
int j;
for (j = 0; j < height; j++)
{
free(arr[j]);
free(arr);
}
}
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
if (height <= 0 || width <= 0 || arr == NULL)
{
freemem(arr,  height);
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
arr[i] = (int *) malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
freemem(arr,  height);
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
}
