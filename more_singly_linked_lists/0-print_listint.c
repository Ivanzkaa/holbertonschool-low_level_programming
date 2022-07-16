#include "lists.h"
/**
 * print_listint - all elements of a linked list
 * @h: head
 * Return: the number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	size_t num_elem = 0;

	for (; h != NULL; num_elem++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_elem);
}
