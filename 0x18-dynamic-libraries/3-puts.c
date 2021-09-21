#include "main.h"
#include <unistd.h>
/**
* _puts - holbertons puts
* @str: string that gets passed to the _puts function
*Description: prints a char
*Return:
*/
void _puts(char *str)
{
while(str)
{
write(1, str, 1);
str++;
}
}

