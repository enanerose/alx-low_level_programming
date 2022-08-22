#include "lists.h"
/**
 * insert_nodeint_at_index - sum of all the data (n)
 * @head: head of list
 * @idx: index of node
 * @n: integer
 * Description: sum of all the data (n) of a listint_t linked list.
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node = NULL;
listint_t *actual = *head;
unsigned int cont = 1;

if (head == NULL)
return (NULL);

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = NULL;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}

while (actual != NULL)
{
if (idx == cont)
{
node->next = actual->next;
actual->next = node;
return (node);
}
cont++;
actual = actual->next;
}
return (NULL);
}
