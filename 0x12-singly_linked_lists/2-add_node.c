#include "lists.h"
#include "helpers.c"
#include <string.h>

/**
* add_node - adds a node at the beginning of a structure
* @head: head of the structure to be edited
* @str: the string data defined in the structure
*Return: the new head
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode =  malloc(sizeof(list_t));
if (newnode)
{
newnode->str = strdup(str);
newnode->len = str_len(str);
newnode->next = *head;
*head = newnode;
return (*head);
}
return (NULL);
}
