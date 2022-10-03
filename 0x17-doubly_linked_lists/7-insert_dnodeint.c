#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at idx position.
 * @h: head of list
 * @idx: index of node
 * @n: integer
 * Description: insert a node at idx position of double linked list.
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *actual = *h;
	unsigned int cont = 0;

	if (h == NULL)
		return (NULL);
	if (h == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	while (actual != NULL)
	{
		if (idx == cont && actual->next != NULL)
		{
			new->next = actual;
			new->prev = actual->prev;
			actual->prev->next = new;
			actual->prev = new;
			return (new);
		}
		if (actual->next == NULL && cont == idx)
		{
			actual->next = new;
			new->prev = actual;
			return (new);
		}
		cont++;
		actual = actual->next;
	}
	return (NULL);
}
