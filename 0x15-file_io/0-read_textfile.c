#include <stdio.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
*read_textfile - file reader
*@filename: file name to be read
*@letters: number of letters
*Description:
*Return: 1 if success 0 if fail
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fr, fw, bytes, chars = 0;
char c;
if (filename == NULL)
	return (0);
fr = open(filename, O_RDONLY);
if (fr == -1)
	return (0);
fw = open(filename, O_WRONLY);
if (fw == -1)
	return (0);
while ((bytes = read(fr, &c, sizeof(c))) > 0)
{
write(1, &c, 1);
chars++;
}
close(fr);
close(fw);
return (chars);
}

