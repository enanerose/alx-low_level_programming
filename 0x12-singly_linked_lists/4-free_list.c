#include "lists.h"

#include <stdio.h>

/**
 * free_list - frees a list_t list.
 * @head: head of list
 * Description: free list
 * Return: Nothing
 */

void free_list(list_t *head)

{

list_t *temp;

if (head == NULL)

return;

while (head != NULL)

{

temp = head->next;

free(head->str);

free(head);

head = temp;

}

}
