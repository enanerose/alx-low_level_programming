#include "lists.h"

/**
 * sum_listint - sum of all the data (n)
 * @head: head of list
 * Description: sum of all the data (n) of a listint_t linked list.
 * Return: int
 */

int sum_listint(listint_t *head)

{

int sum = 0;



if (head == NULL)

return (0);



while (head != NULL)

{

sum = sum + head->n;

head = head->next;

}

return (sum);

}
