#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include "helpers.c"
/**
* add_node_end - adds a node at the end of a linked list
* @head: a pointer to a head of a linked list
* @str: the string data containded in the linked list
*Return: the pointer to the head if all is well ||
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode = malloc(sizeof(list_t)), *end;
char *dup = strdup(str);
if (newnode == NULL || (dup == NULL && str != NULL))
{
return (free(dup), free(newnode), NULL);
}
newnode->str = dup, newnode->len = dup == NULL ? : str_len(dup);
newnode->next = NULL;

if (*head == NULL)
{
return (*head = newnode);
}

end = *head;

while (end->next != NULL)
{
end = end->next;
}
end->next = newnode;
return (*head);
}

