#include "lists.h"
/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index index of a dlistint_t linked list
 * @head: double pointer of head
 * @index: int
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;

	if (!head || !(*head))
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		while (node && index != 0)
			node = node->next, index--;

		if (!node)
			return (-1);

		node->prev->next = node->next;
		if (node->next)
			node->next->prev = node->prev;
	}

	free(node);
	return (1);
}
