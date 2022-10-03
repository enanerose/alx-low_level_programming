#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: list
 * Description:  returns the number of elements of a list.
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numNodes;

	numNodes = 0;
	if (h == NULL)
		return (numNodes);

	while (h != NULL)
	{
		numNodes++;
		h = h->next;
	}

	return (numNodes);
}
