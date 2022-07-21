#include "lists.h"
/**
 * dlistint_len - a function returns the number of elements
 * in a linked dlistint_t list
 * @h: pointer head
 * Return: the number of elements in linked dlistint list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
