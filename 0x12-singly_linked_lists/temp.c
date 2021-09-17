#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
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

/**
* add_node - adds a node at the beginning of a structure
* @head: head of the structure to be edited
* @str: the string data defined in the structure
*Description:
*Return: the new head
*/
list_t *add_node(list_t **head, const char *str)
{
int len;
char *dup = strdup(str);
list_t *newnode =  malloc(sizeof(list_t));
if (newnode != NULL && (dup != NULL && str != NULL))
{
len = str_len(str);
newnode->str = dup;
newnode->len = len;
newnode->next = head == NULL ? NULL : *head;
*head = newnode;
str = NULL;
return (*head);
}
else {
return (free(dup), free());
}
return (NULL);
}
