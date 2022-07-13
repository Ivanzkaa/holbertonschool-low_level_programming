#include "lists.h"
/**
 * print_list - prints the elements if the list
 * @h: head of the list
 * Return: the elements
 **/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}
	return (i);
}
