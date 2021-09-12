#include "lists.h"
/**
* str_len - adds a node at the beginning of a structure
* @str: the string data defined in the structure
*Return: the new head
*/
int str_len(const char *str)
{
int i;
if (str != NULL)
{
i = 0;
while (str[i])
{
i++;
}
return (i);
}
exit(-1);
}
