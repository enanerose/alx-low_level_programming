#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node
 * @head: head of list
 * @index: index of node
 * Description: function that returns the nth node of a double linked list
 * Return: Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == i)
		{
			node = head;
			return (node);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
