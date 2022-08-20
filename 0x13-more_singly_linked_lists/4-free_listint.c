#include "lists.h"

/**
 * free_listint - frees a list_t list.
 * @head: head of list
 * Description: free list
 * Return: Nothing
 */

void free_listint(listint_t *head)

{

listint_t *temp;

if (head == NULL)

return;



while (head != NULL)

{

temp = head->next;

free(head);

head = temp;

}

free(head);

}
