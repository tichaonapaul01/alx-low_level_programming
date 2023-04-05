#include "lists.h"

/**
 * pop_listint - delete the head of the node of a linked list.
 * @head: head of a list.
 *
 * Return: head  node’s data (n).
 */
int pop_listint(listint_t **head)
{
       int hnode;
       listint_t *h;
       listint_t *current;

       if (*head == NULL)
	       return (0);

       current = *head;

	hnode = current->n;

	h = current->next;

	free(current);

	*head = h

	return (hnode);
}
