#include "lists.h"

#include <stdio.h>

/**
 * add_nodeint - adds a new node
 * @head: head of list
 * @n: number passed
 * Description: adds a new node at the beginning of a list_t list.
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)

{

listint_t *node = NULL;



node = malloc(sizeof(listint_t));

if (node == NULL)

return (NULL);



node->n = n;

node->next = *head;



(*head) = node;

return (node);

}
