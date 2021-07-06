#include "holberton.h"
/**
* _strstr - searching a string
* @haystack: text
* @needle: search string
*Description:
*Return: address of string start
*/
char *_strstr(char *haystack, char *needle)
{
int i, j, nl = 0;
while (needle[nl])
{
nl++;
}
for (i = 0; haystack[i] != '\0'; i++)
{
if (needle[0] == haystack[i])
{
for (j = 1; needle[j] != '\0' && haystack[i + j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
{
break;
}
}
if(j == nl)
{
return (&haystack[i]);
}
}
}
return (0);
}
