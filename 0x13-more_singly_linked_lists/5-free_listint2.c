#include "lists.h"

/**
 * free_listint2 - frees a list_t list.
 * @head: head of list
 * Description: free list.sets the head to NULL
 * Return: Nothing
 */

void free_listint2(listint_t **head)

{

listint_t *temp;



if (head == NULL)

return;



while ((*head)->next != NULL)

{

temp = (*head)->next;

free(*head);

*head = temp;

}

free((*head)->next);

free(*head);

*head = NULL;

}
