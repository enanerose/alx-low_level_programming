#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list_t list.
 * @h: list to print
 * Description: Print elements of a list.
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
int n = 0;

while (h != NULL)
{
printf("%d\n", h->n);
n++;
h = h->next;
}
return (n);
}
