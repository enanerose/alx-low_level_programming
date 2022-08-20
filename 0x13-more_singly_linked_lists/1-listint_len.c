#include "lists.h"

#include <stdio.h>

/**
 * listint_len - count number of elements in a linked list_t list.
 * @h: list to print
 * Description:  number of elements in a linked list_t list.
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)

{

int n = 0;



while (h != NULL)

{

n++;

h = h->next;

}

return (n);

}
