#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete a node
 * @head: head of list
 * @index: index of node
 * Description: deletes the node at index index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int cont = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	for ( ; temp != NULL && cont < index ; cont++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	if (*head == temp)
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	/*temp->next = next;*/
	return (1);

}
