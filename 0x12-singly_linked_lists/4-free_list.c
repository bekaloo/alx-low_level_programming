#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees memory held by a linked list
* @head: head of the linked list
*Return: ---
*/
void free_list(list_t *head)
{
list_t *temp = head;
while (head->next != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
if (head->str != NULL)
{
free(head->str);
}
free(temp);
}

