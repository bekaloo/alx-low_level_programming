#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
if (argc == 1)
{
printf("%d\n", 0);
exit(EXIT_SUCCESS);
} else
    printf("%d\n", level1Recur(argv, argc, 1));

exit(EXIT_SUCCESS);
}
int level1Recur(char *arr[], int length, int idx)
{
int retVal;

retVal = 1;

if (idx == length)
return (0);
else if (atoi(*(arr + idx)) < 0)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
else if (**(arr + idx) < '0' && **(arr + idx) > '9')
{
printf("Error\n");
exit(EXIT_FAILURE);
}
level2Recur(*(arr + idx), &retVal, 0);
if (!retVal)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
return (atoi(*(arr + idx)) + level1Recur(arr, length, idx + 1));
}
void level2Recur(char *str, int *ret, int idx)
{
if (*(str + idx))
{
if (*(str + idx) < '0' || *(str + idx) > '9')
    *ret = 0;
level2Recur(str, ret, idx + 1);
}
}
