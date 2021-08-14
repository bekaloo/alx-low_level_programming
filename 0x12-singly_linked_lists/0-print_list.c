#include "lists.h"
#include <stddef.h>
/**
*
*Description:
*Return:
*/

size_t print_list(const list_t *h)
{
size_t i=0;
while (h)
{
printf("%s", h->str);
h = h->next;
i++;
}
return (i);
}