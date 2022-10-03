#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: head of list
 * @n: number
 * Description: adds a new node at the beginning of a list.
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = (*head);
	node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = node;

	(*head) = node;

	return (node);
}
