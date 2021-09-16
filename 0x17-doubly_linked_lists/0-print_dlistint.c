#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
* print_dlistint - prints a doubly linked list
* @h: linked list
*Description:
*Return: number of strings
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t c = 0;
if (h != NULL)
{
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
c++;
}
return (c);
}
else
{
return (-1);
}
}
