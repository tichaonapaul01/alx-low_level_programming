#include "lists.h"

/**
 * free_listint2 - frees a linked list.
 * @head: head of a list.
 *
 * Return: non return.
*/
void free_listint2(listint_t **head)
{
       	listint_t *tmp;
    	listint_t *current;

    	if (head != NULL)
    	{

   		 current = *head;
   	 	while (tmp = current) != NULL) 
    		{
        		current = current->next;
        		free(tmp);
   		 }
   		 *head = NULL;
 	}
}

