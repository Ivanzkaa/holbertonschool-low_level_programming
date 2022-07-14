#include "lists.h"
/**
 * list_len - the number of elements
 * @h: pointer
 * Return: number of elements
**/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (list_len(h->next) + 1);
	return (1);
}
