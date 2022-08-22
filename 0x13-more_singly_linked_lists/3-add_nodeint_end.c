#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of list
 * @n: int
 * Description: adds a new node at the beginning of a list_t list.
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node = NULL;
listint_t *actual = *head;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = NULL;

if ((*head) == NULL)
(*head) = node;
else
{
while (actual->next != NULL)
actual = actual->next;

actual->next = node;
}
return (*head);
}
