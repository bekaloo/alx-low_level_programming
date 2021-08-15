#include "lists.h"
#include <stddef.h>
/**
*list_len - length of a linked list
* @h: the linked list
*Description:
*Return: length of the list
*/

size_t list_len(const list_t *h)
{
size_t i;
while (h)
{
i++;
h = h->next;
}
return (i);
}
