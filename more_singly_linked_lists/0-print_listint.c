#include "lists.h"
/**
 * print_listint - all elements of a linked list
 * @h: head
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t list_elem = 0;

	for (; h != NULL; list_elem++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (list_elem);
}
