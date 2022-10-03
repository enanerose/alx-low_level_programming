#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double list
 * @h: list
 * Description:  prints all the elements of a dlistint_t list.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t numNodes;

	numNodes = 0;
	if (h == NULL)
		return (numNodes);

	if (h->next != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			numNodes++;
			h = h->next;
		}
	}
	else
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			numNodes++;
			h = h->prev;
		}
	}
	return (numNodes);
}
