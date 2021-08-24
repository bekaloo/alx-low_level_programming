#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*
*Description:
*Return:
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

FILE *fp, *fw;
char c;
fw = fopen(filename, "w");
fp = fopen(filename, "r");
if (fp == NULL || filename == NULL)
{
return (0);
}
else
{
while ((c = fgetc(fp)) != EOF)
{
fputc(c, fw);
}
fclose(fp);
return (1);
}
}