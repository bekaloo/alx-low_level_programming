#include "lists.h"

/**
* str_dup - duplicates a string and returns its length
* @src: source string
* @dest: duplicate string
*Description:
*Return: length if malloc succeded or -1 if it failed
*/
int str_dup(const char *src, char *dest)
{
dest = malloc(sizeof(src));
if (dest)
{
int i;
while (src)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (i);
}
return (-1);
}
/**
* add_node - adds a node at the beginning of a structure
* @head: head of the structure to be edited
* @str: the string data defined in the structure
*Description:
*Return: the new head
*/
list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
struct list_s *newnode = malloc(sizeof(list_t));
if (newnode)
{
len = str_dup(str, dup);
newnode->str = dup;
newnode->next = *head;
}
return (newnode);
}
