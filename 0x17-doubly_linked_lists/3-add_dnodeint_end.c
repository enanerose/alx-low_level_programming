#include "lists.h"
#include <stdio.h>
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head of list
 * @n: An integer ad data
 * Description: adds a new node at the end of a double linked list.
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *actual = *head;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if ((*head) == NULL)
		(*head) = node;
	else
	{
		while (actual->next != NULL)
			actual = actual->next;

		actual->next = node;
		node->prev = actual;
	}

	return (*head);
}
