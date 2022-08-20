#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head of list
 * Description: reverse_listint
 * Return: node
 */



listint_t *reverse_listint(listint_t **head)

{

listint_t *prev = NULL;

listint_t *next = NULL;



while ((*head) != NULL)

{

next = (*head)->next;

(*head)->next = prev;

prev = (*head);

(*head) = next;

}

*head = prev;

return (*head);

}
