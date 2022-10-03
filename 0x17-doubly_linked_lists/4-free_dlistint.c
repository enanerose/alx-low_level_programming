#include "lists.h"
#include <stdio.h>
/**
 * free_dlistint - frees a list.
 * @head: head of list
 * Description: free a double list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	if (head->next != NULL)
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
	else
	{
		while (head != NULL)
		{
			temp = head->prev;
			free(head);
			head = temp;
		}
	}
}
