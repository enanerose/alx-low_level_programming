#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of list
 * @index: index of node
 * Description: function that returns the nth node of a linked list
 * Return: Node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

listint_t *node = NULL;

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
