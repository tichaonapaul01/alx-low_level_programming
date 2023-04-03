#include "lists.h"

/* a function that prints all elements of a linked list
* this function include integers 
* return: the number of nodes
 */
size_t print_listint(const listint_t *h) 
{
size_t num = 0;
while (h)
}
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
