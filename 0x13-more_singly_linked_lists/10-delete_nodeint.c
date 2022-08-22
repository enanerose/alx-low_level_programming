#include "lists.h"
/**
 * delete_nodeint_at_index - Delete a node
 * @head: head of list
 * @index: index of node
 * Description: deletes the node at index index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *next, *temp;
unsigned int cont = 0;

if (*head == NULL)
return (-1);

temp = *head;
if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

for ( ; temp != NULL && cont < index - 1; cont++)
temp = temp->next;

if (temp == NULL || temp->next == NULL)
return (-1);

next = temp->next->next;
free(temp->next);
temp->next = next;
return (1);

}
