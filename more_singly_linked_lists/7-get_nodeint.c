#include "lists.h"
/**
 * get_nodeint_at_index - getiing the nth of a node
 * @head: head, pointer
 * @index: index
 * Return: nth or NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	for (; i < index && head; i++)
		head = head->next;

	return (head);
}
