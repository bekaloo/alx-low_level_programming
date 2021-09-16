#include "lists.h"
#include <stdlib.h>
/**
* free_list - frees memory held by a linked list
* @head: head of the linked list
*Return: ---
*/
void free_list(list_t *head)
{
list_t *temp;
for (; head != NULL; head = temp)
{
temp = head->next;
free(head->str);
free(head);
}
}

