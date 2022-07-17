#include "lists.h"
/**
 * delete_nodeint_at_index - deleting node at index
 * @head: head, pointer
 * @index: index
 * Return: 1 or NULL
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = NULL, *data_holder = NULL, *to_delete = NULL;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		data_holder = (*head)->next;
		free(*head);
		*head = data_holder;
		return (1);
	}

	data_holder = *head;

	for (i = 0; i <= index && data_holder; i++)
	{
		if (index - 1 == i)
			prev = data_holder;

		if (i == index)
			to_delete = data_holder;

		data_holder = data_holder->next;
	}

	if (!data_holder && !to_delete)
		return (-1);

	free(to_delete);

	prev->next = data_holder;

	return (1);
}
