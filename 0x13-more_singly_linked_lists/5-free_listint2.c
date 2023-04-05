#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: head of a list.
 *
 * Return: non return.
*/
void free_listint2(listint_t **head)
{
    listint_t *current;
    listint_t *temp;

    if (head == NULL || *head == NULL)
    {
        return;
    }

    current = *head;
    while (current != NULL) {
        temp = curr;
        curr = curr->next;
        free(tmp);
    }

    *head = NULL;
}

