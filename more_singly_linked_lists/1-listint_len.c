#include "lists.h"
/**
 * listint_len - number of elements of a linke list
 * @h: head
 * Return: number of elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	for (; h; num_elem++)
		h = h->next;

	return (num_elem);
}
