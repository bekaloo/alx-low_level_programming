#include "holberton.h"
/**
* free_grid - frees a multidimensional array
* @grid: the matrix/array
* @height: height of the matrix/array
*Description:
*Return: nothing
*/

void free_grid(int **grid, int height)
{
int j;
for (j = 0; j < height; j++)
{
free(grid[j]);
}
free(grid);
}
