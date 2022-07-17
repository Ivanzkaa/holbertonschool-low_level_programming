#include "lists.h"
/**
 * pop_listint - deleting the head node of a list
 * @head: head, pointer
 * Return: the data of the node if not NULL
 **/
int pop_listint(listint_t **head)
{
	listint_t *data_holder = NULL;
	int value = 0;

	if (!head || !*head)
		return (0);

	data_holder = (*head)->next;
	value = (*head)->n;

	free(*head);

	*head = data_holder;
	return (value);
}
